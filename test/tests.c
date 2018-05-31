#define CTEST_MAIN

#include <ctest.h>
#include <game.h>

CTEST(checkers, repeat_digit_incorrect_input) {
    int result = repeat_digit("5677");
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




