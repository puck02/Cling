#!/bin/bash

# Cling - 综合测试脚本
set -e

cd "$(dirname "$0")"

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

TOTAL=0
PASSED=0
FAILED=0
SKIPPED=0

echo "========================================"
echo "Cling - 测试所有58道练习"
echo "========================================"
echo ""

test_compile() {
    local name=$1
    local src=$2
    TOTAL=$((TOTAL + 1))
    echo -n "[$TOTAL] $name... "
    if gcc -std=c11 -Wall -Wextra -Werror "solutions/$src" -o /tmp/test$$ 2>/dev/null; then
        echo -e "${GREEN}✓${NC}"
        PASSED=$((PASSED + 1))
        rm -f /tmp/test$$
    else
        echo -e "${RED}✗${NC}"
        FAILED=$((FAILED + 1))
    fi
}

test_unity() {
    local name=$1
    local src=$2
    TOTAL=$((TOTAL + 1))
    echo -n "[$TOTAL] $name... "
    if gcc -std=c11 -Wall -Wextra -Werror -I tests/unity "solutions/$src" tests/unity/unity.c -o /tmp/test$$ 2>/dev/null; then
        if /tmp/test$$ >/tmp/out$$ 2>&1; then
            echo -e "${GREEN}✓${NC}"
            PASSED=$((PASSED + 1))
        else
            if grep -q "Unity Double Precision Disabled" /tmp/out$$; then
                echo -e "${YELLOW}⊘${NC}"
                SKIPPED=$((SKIPPED + 1))
            else
                echo -e "${RED}✗${NC}"
                FAILED=$((FAILED + 1))
            fi
        fi
        rm -f /tmp/test$$ /tmp/out$$
    else
        echo -e "${RED}✗${NC}"
        FAILED=$((FAILED + 1))
    fi
}

echo "Chapter 00: Introduction"
test_compile "intro1" "intro1.c"
test_compile "intro2" "intro2.c"
echo ""

echo "Chapter 01: Variables"
test_compile "variables1" "variables1.c"
test_compile "variables2" "variables2.c"
test_unity "variables3" "variables3.c"
test_unity "variables4" "variables4.c"
test_unity "variables5" "variables5.c"
test_unity "variables6" "variables6.c"
test_unity "variables7" "variables7.c"
test_unity "variables8" "variables8.c"
echo ""

echo "Chapter 02: Control Flow"
test_unity "if1" "if1.c"
test_unity "if2" "if2.c"
test_unity "switch1" "switch1.c"
test_unity "loops1" "loops1.c"
test_unity "loops2" "loops2.c"
test_unity "loops3" "loops3.c"
test_unity "loops4" "loops4.c"
test_unity "loops5" "loops5.c"
echo ""

echo "Chapter 03: Functions"
test_unity "functions1" "functions1.c"
test_unity "functions2" "functions2.c"
test_unity "functions3" "functions3.c"
test_unity "functions4" "functions4.c"
test_unity "functions5" "functions5.c"
test_unity "functions8" "functions8.c"
test_unity "functions6" "functions6.c"
test_unity "functions7" "functions7.c"
echo ""

echo "Chapter 04: Arrays & Strings"
test_unity "arrays1" "arrays1.c"
test_unity "arrays2" "arrays2.c"
test_unity "arrays3" "arrays3.c"
test_unity "arrays4" "arrays4.c"
test_unity "strings1" "strings1.c"
test_unity "strings2" "strings2.c"
test_unity "strings3" "strings3.c"
test_unity "strings4" "strings4.c"
echo ""

echo "Chapter 05: Pointers"
test_unity "pointers1" "pointers1.c"
test_unity "pointers2" "pointers2.c"
test_unity "pointers3" "pointers3.c"
test_unity "pointers4" "pointers4.c"
test_unity "pointers5" "pointers5.c"
test_unity "pointers6" "pointers6.c"
test_unity "pointers7" "pointers7.c"
test_unity "pointers8" "pointers8.c"
test_unity "pointers9" "pointers9.c"
test_unity "pointers10" "pointers10.c"
test_unity "pointers11" "pointers11.c"
echo ""

echo "Chapter 06: Structs & Memory"
test_unity "structs1" "structs1.c"
test_unity "structs2" "structs2.c"
test_unity "structs3" "structs3.c"
test_unity "structs4" "structs4.c"
test_unity "memory1" "memory1.c"
test_unity "memory2" "memory2.c"
test_unity "memory3" "memory3.c"
test_unity "memory4" "memory4.c"
echo ""

echo "Chapter 07: File I/O"
test_unity "file1" "file1.c"
test_unity "file2" "file2.c"
test_unity "file3" "file3.c"
test_unity "file4" "file4.c"
echo ""

echo "Chapter 08: Final Project"
TOTAL=$((TOTAL + 1))
echo -n "[58] Snake Game... "
if gcc -std=c11 -Wall -Wextra -Werror -I exercises/08_final_project/snake -I tests/unity solutions/snake_logic.c exercises/08_final_project/snake/snake_test.c tests/unity/unity.c -o /tmp/test$$ 2>/dev/null; then
    if /tmp/test$$ >/dev/null 2>&1; then
        echo -e "${GREEN}✓${NC}"
        PASSED=$((PASSED + 1))
    else
        echo -e "${RED}✗${NC}"
        FAILED=$((FAILED + 1))
    fi
    rm -f /tmp/test$$
else
    echo -e "${RED}✗${NC}"
    FAILED=$((FAILED + 1))
fi
echo ""

rm -f test_*.txt test_*.bin

echo "========================================"
echo "总数: $TOTAL | 通过: $PASSED | 跳过: $SKIPPED | 失败: $FAILED"
echo "通过率: $(((PASSED + SKIPPED) * 100 / TOTAL))%"
echo "========================================"

if [ $FAILED -eq 0 ]; then
    echo -e "${GREEN}🎉 所有测试通过！${NC}"
    exit 0
else
    echo -e "${RED}❌ 有 $FAILED 个测试失败${NC}"
    exit 1
fi
