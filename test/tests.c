#define CTEST_MAIN

#include <ctest.h>
#include <game.h>

CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("5677");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("56788");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("5678 8");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}


CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("5567");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("5667");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_correct_input) {
    int result = repeat_digit("5678");
    int expect = 1;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("567r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("r567");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("5678r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("r5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("r 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("5678 r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("5678 ");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check(" 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input) {
    int result = digit_check("5678");
    int expect = 1;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input) {
    int result = digit_check("5678 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input) {
    int result = digit_check("5678 rrrrr");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input) {
    int result = digit_check("5678 4321 rr");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

int main(int argc, const char** argv) {
    int test_res = ctest_main(argc, argv);
    return test_res;
}