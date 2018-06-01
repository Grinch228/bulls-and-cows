#define CTEST_MAIN

#include <ctest.h>
#include <game.h>

CTEST(checkers, repeat_digit_incorrect_input1) {
    int result = repeat_digits("5677");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input2) {
    int result = repeat_digits("56788");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input3) {
    int result = repeat_digits("5678 8");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}


CTEST(checkers, repeat_digit_incorrect_input4) {
    int result = repeat_digits("5567");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_incorrect_input5) {
    int result = repeat_digits("5667");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, repeat_digit_correct_input6) {
    int result = repeat_digits("5678");
    int expect = 1;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input1) {
    int result = digit_check("567r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input2) {
    int result = digit_check("r567");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input3) {
    int result = digit_check("5678r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input4) {
    int result = digit_check("r5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input5) {
    int result = digit_check("r 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input6) {
    int result = digit_check("5678 r");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input7) {
    int result = digit_check("5678 ");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input8) {
    int result = digit_check(" 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input9) {
    int result = digit_check("5678\n");
    int expect = 1;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_incorrect_input10) {
    int result = digit_check("5678 5678");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input11) {
    int result = digit_check("5678 rrrrr");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

CTEST(checkers, digit_check_correct_input12) {
    int result = digit_check("5678 4321 rr");
    int expect = 0;
    ASSERT_EQUAL(expect,result);
}

int main(int argc, const char* argv[]) {
    int result = ctest_main(argc, argv);
    printf("All tests are done!\n");
    return result;
}
