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

CTEST(game, bulls_counter_guess_0) {
    int result = bulls_counter(1234, 5678);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(game, bulls_counter_guess_1) {
    int result = bulls_counter(1234, 5674);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(game, bulls_counter_guess_2) {
    int result = bulls_counter(1234, 5634);
    int expect = 2;
    ASSERT_EQUAL(expect, result);
}

CTEST(game, bulls_counter_guess_3) {
    int result = bulls_counter(1234, 5234);
    int expect = 3;
    ASSERT_EQUAL(expect, result);
}

CTEST(game, bulls_counter_guess_4) {
    int result = bulls_counter(1234, 1234);
    int expect = 4;
    ASSERT_EQUAL(expect, result);
}