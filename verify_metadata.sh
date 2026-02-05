#!/bin/bash

# Cling - 元数据一致性验证脚本
# 检查文件系统与info.toml的一致性

set -e
cd "$(dirname "$0")"

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo "========================================"
echo "Cling - 元数据一致性验证"
echo "========================================"
echo ""

ERRORS=0

# 1. 检查info.toml中定义的所有练习文件是否存在
echo "1. 检查info.toml中定义的练习文件是否存在..."
while IFS= read -r name; do
    if [ "$name" == "cling" ]; then
        continue
    fi
    
    # 从info.toml中找到对应的目录
    dir=$(grep -A1 "name = \"$name\"" info.toml | grep "^dir = " | cut -d'"' -f2)
    
    if [ -z "$dir" ]; then
        echo -e "${RED}✗${NC} $name: 找不到目录定义"
        ERRORS=$((ERRORS + 1))
        continue
    fi
    
    file="exercises/$dir/$name.c"
    if [ ! -f "$file" ]; then
        echo -e "${RED}✗${NC} $name: 文件不存在 ($file)"
        ERRORS=$((ERRORS + 1))
    else
        echo -e "${GREEN}✓${NC} $name"
    fi
done < <(grep -o 'name = "[^"]*"' info.toml | cut -d'"' -f2)

echo ""

# 2. 检查文件系统中的练习是否都在info.toml中定义
echo "2. 检查exercises目录中的练习是否都在info.toml中定义..."
find exercises -name "*.c" -type f | while read -r file; do
    # 跳过snake_test.c和snake_logic.c
    if [[ "$file" == *"snake_test.c"* ]] || [[ "$file" == *"snake_logic.c"* ]]; then
        continue
    fi
    
    basename=$(basename "$file" .c)
    
    if grep -q "^name = \"$basename\"" info.toml; then
        echo -e "${GREEN}✓${NC} $basename (在info.toml中)"
    else
        echo -e "${YELLOW}⚠${NC} $basename: 文件存在但info.toml中未定义"
        ERRORS=$((ERRORS + 1))
    fi
done

echo ""

# 3. 检查solutions目录与exercises目录的对应关系
echo "3. 检查solutions目录与exercises目录的对应关系..."
find exercises -name "*.c" -type f | while read -r ex_file; do
    if [[ "$ex_file" == *"snake_test.c"* ]]; then
        continue
    fi
    
    basename=$(basename "$ex_file")
    sol_file="solutions/$basename"
    
    if [ ! -f "$sol_file" ]; then
        echo -e "${YELLOW}⚠${NC} $basename: exercises中存在但solutions中缺失"
        ERRORS=$((ERRORS + 1))
    else
        echo -e "${GREEN}✓${NC} $basename (有对应解决方案)"
    fi
done

echo ""

# 4. 统计信息
echo "4. 统计信息..."
EXERCISE_COUNT=$(grep -o 'name = "[^"]*"' info.toml | cut -d'"' -f2 | grep -v "cling" | wc -l | tr -d ' ')
FILE_COUNT=$(find exercises -name "*.c" -type f | grep -v snake_test | grep -v snake_logic | wc -l | tr -d ' ')
SOLUTION_COUNT=$(find solutions -name "*.c" -type f | wc -l | tr -d ' ')

echo "info.toml中定义的练习数: $EXERCISE_COUNT"
echo "exercises目录中的.c文件: $FILE_COUNT"
echo "solutions目录中的.c文件: $SOLUTION_COUNT"

echo ""
echo "========================================"
if [ $ERRORS -eq 0 ]; then
    echo -e "${GREEN}✓ 元数据一致性验证通过！${NC}"
else
    echo -e "${RED}✗ 发现 $ERRORS 个问题${NC}"
    exit 1
fi
echo "========================================"
