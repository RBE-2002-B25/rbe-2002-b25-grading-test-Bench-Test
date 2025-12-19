#include <unity.h>
#include "math_utils.h"

void setUp() {
    // optional
}

void tearDown() {
    // optional
}

void test_add_positive_numbers() {
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_negative_numbers() {
    TEST_ASSERT_EQUAL(-1, add(2, -3));
}

void test_add_zero() {
    TEST_ASSERT_EQUAL(7, add(7, 0));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    return UNITY_END();
}
