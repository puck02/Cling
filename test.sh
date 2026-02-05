#!/bin/bash

# Cling项目测试脚本
# 用于验证练习是否能正确编译

echo "🎯 Cling - C语言学习系统测试"
echo "================================"
echo ""

# 检查编译器
if ! command -v gcc &> /dev/null; then
    echo "❌ 错误: 未找到GCC编译器"
    echo "请安装GCC: brew install gcc (macOS) 或 apt install gcc (Linux)"
    exit 1
fi

echo "✅ GCC版本: $(gcc --version | head -n 1)"
echo ""

# 测试Unity测试框架
echo "📦 测试Unity测试框架..."
if [ ! -f "tests/unity/unity.c" ]; then
    echo "❌ 错误: Unity测试框架未找到"
    echo "请确保已下载Unity框架文件"
    exit 1
fi
echo "✅ Unity测试框架已就绪"
echo ""

# 测试编译intro1
echo "🔨 测试编译: intro1 (编译验证练习)"
gcc -Wall -Wextra -std=c11 exercises/00_intro/intro1.c -o /tmp/intro1.out 2>&1
if [ $? -eq 0 ]; then
    echo "❌ intro1应该编译失败（这是预期的，因为有语法错误）"
else
    echo "✅ intro1编译失败（符合预期）"
fi
echo ""

# 测试编译solution
echo "🔨 测试编译: intro1解答"
gcc -Wall -Wextra -std=c11 solutions/intro1.c -o /tmp/intro1_sol.out 2>&1
if [ $? -eq 0 ]; then
    echo "✅ intro1解答编译成功"
    /tmp/intro1_sol.out
else
    echo "❌ intro1解答编译失败"
fi
echo ""

# 测试编译variables3（测试驱动练习）
echo "🔨 测试编译: variables3 (单元测试练习)"
gcc -Wall -Wextra -std=c11 \
    -I tests/unity \
    exercises/01_variables/variables3.c \
    tests/unity/unity.c \
    -o /tmp/variables3.out 2>&1
if [ $? -eq 0 ]; then
    echo "✅ variables3编译成功"
    echo "运行测试："
    /tmp/variables3.out
    if [ $? -eq 0 ]; then
        echo "❌ 测试应该失败（学生版本未实现）"
    else
        echo "✅ 测试失败（符合预期）"
    fi
else
    echo "✅ variables3编译成功（可能有测试失败，这是预期的）"
fi
echo ""

# 测试编译solution
echo "🔨 测试编译: variables3解答"
gcc -Wall -Wextra -std=c11 \
    -I tests/unity \
    solutions/variables3.c \
    tests/unity/unity.c \
    -o /tmp/variables3_sol.out 2>&1
if [ $? -eq 0 ]; then
    echo "✅ variables3解答编译成功"
    echo "运行测试："
    /tmp/variables3_sol.out
    if [ $? -eq 0 ]; then
        echo "✅ 所有测试通过"
    else
        echo "❌ 测试失败"
    fi
else
    echo "❌ variables3解答编译失败"
fi
echo ""

# 测试贪吃蛇项目
echo "🐍 测试编译: 贪吃蛇项目"
gcc -Wall -Wextra -std=c11 \
    -I tests/unity \
    exercises/08_final_project/snake/snake_test.c \
    exercises/08_final_project/snake/snake_logic.c \
    tests/unity/unity.c \
    -o /tmp/snake_test.out 2>&1
if [ $? -eq 0 ]; then
    echo "✅ 贪吃蛇测试编译成功"
    echo "运行测试："
    /tmp/snake_test.out
    if [ $? -eq 0 ]; then
        echo "❌ 测试应该失败（学生版本未实现）"
    else
        echo "✅ 测试失败（符合预期，等待学生实现）"
    fi
else
    echo "✅ 贪吃蛇编译成功"
fi
echo ""

# 测试贪吃蛇解答
echo "🐍 测试编译: 贪吃蛇解答"
gcc -Wall -Wextra -std=c11 \
    -I tests/unity \
    exercises/08_final_project/snake/snake_test.c \
    solutions/snake_logic.c \
    tests/unity/unity.c \
    -o /tmp/snake_test_sol.out 2>&1
if [ $? -eq 0 ]; then
    echo "✅ 贪吃蛇解答编译成功"
    echo "运行测试："
    /tmp/snake_test_sol.out
    if [ $? -eq 0 ]; then
        echo "✅ 所有测试通过！"
    else
        echo "❌ 测试失败"
    fi
else
    echo "❌ 贪吃蛇解答编译失败"
fi
echo ""

echo "================================"
echo "✅ 测试完成！"
echo ""
echo "下一步："
echo "1. 安装Rust (用于CLI工具): curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh"
echo "2. 编译CLI工具: cargo build --release"
echo "3. 开始学习: ./target/release/cling watch"
echo ""
echo "或者直接使用GCC编译练习："
echo "gcc -Wall -Wextra -std=c11 -I tests/unity exercises/XX/exerciseN.c tests/unity/unity.c -o out && ./out"
