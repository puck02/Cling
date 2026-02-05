#include "unity.h"
#include <string.h>

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void my_strcat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void setUp(void) {}
void tearDown(void) {}

void test_my_strcpy(void) {
    char dest[20];
    my_strcpy(dest, "hello");
    TEST_ASSERT_EQUAL_STRING("hello", dest);
}

void test_my_strcat(void) {
    char dest[20] = "hello";
    my_strcat(dest, " world");
    TEST_ASSERT_EQUAL_STRING("hello world", dest);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_strcpy);
    RUN_TEST(test_my_strcat);
    return UNITY_END();
}
