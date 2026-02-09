#include "unity.h"
#include <string.h>

// 学习目标: 结构体中使用字符串

typedef struct {
    char name[50];
    int age;
    double score;
} Student;

// TODO: 创建并返回一个 Student 结构体
// 提示: 用 strcpy 复制字符串到 s.name
Student create_student(const char *name, int age, double score) {
    // TODO: 在这里实现
    
}

// TODO: 判断学生是否及格（分数 >= 60 为及格）
// 及格返回 1，不及格返回 0
// 注意: 参数是指针，用 s->score 访问
int is_passing(Student *s) {
    // TODO: 在这里实现
    
}

void setUp(void) {}
void tearDown(void) {}

void test_create_student(void) {
    Student s = create_student("Alice", 20, 85.5);
    TEST_ASSERT_EQUAL_STRING("Alice", s.name);
    TEST_ASSERT_EQUAL_INT(20, s.age);
    TEST_ASSERT_DOUBLE_WITHIN(0.01, 85.5, s.score);
}

void test_is_passing(void) {
    Student s1 = create_student("Bob", 19, 75.0);
    Student s2 = create_student("Charlie", 21, 55.0);
    TEST_ASSERT_TRUE(is_passing(&s1));
    TEST_ASSERT_FALSE(is_passing(&s2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_create_student);
    RUN_TEST(test_is_passing);
    return UNITY_END();
}
