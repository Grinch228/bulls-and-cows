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

CTEST(game_func, cows_counter_guess_0) {
    int arr2[4] = {5,6,7,8}, arr1[4] = {1,2,3,4};
    int result = cows_counter(arr1, arr2);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, cows_counter_guess_1) {
    int arr2[4] = {4,6,7,8}, arr1[4] = {1,2,3,4};
    int result = cows_counter(arr1, arr2);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, cows_counter_guess_2) {
    int arr2[4] = {4,3,7,8}, arr1[4] = {1,2,3,4};
    int result = cows_counter(arr1, arr2);
    int expect = 2;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, cows_counter_guess_3) {
    int arr2[4] = {4,3,2,8}, arr1[4] = {1,2,3,4};
    int result = cows_counter(arr1, arr2);
    int expect = 3;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, cows_counter_guess_4) {
    int arr2[4] = {4,3,2,1}, arr1[4] = {1,2,3,4};
    int result = cows_counter(arr1, arr2);
    int expect = 4;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, bulls_counter_guess_0) {
    int arr2[4] = {5,6,7,8}, arr1[4] = {1,2,3,4};
    int result = bulls_counter(arr1, arr2);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, bulls_counter_guess_1) {
    int arr2[4] = {1,6,7,8}, arr1[4] = {1,2,3,4};
    int result = bulls_counter(arr1, arr2);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, bulls_counter_guess_2) {
    int arr2[4] = {1,2,7,8}, arr1[4] = {1,2,3,4};
    int result = bulls_counter(arr1, arr2);
    int expect = 2;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, bulls_counter_guess_3) {
    int arr2[4] = {1,2,3,8}, arr1[4] = {1,2,3,4};
    int result = bulls_counter(arr1, arr2);
    int expect = 3;
    ASSERT_EQUAL(expect, result);
}

CTEST(game_func, bulls_counter_guess_4) {
    int arr2[4] = {1,2,3,4}, arr1[4] = {1,2,3,4};
    int result = bulls_counter(arr1, arr2);
    int expect = 4;
    ASSERT_EQUAL(expect, result);
}

int main(int argc, const char* argv[]) {
    int result = ctest_main(argc, argv);
    printf("All tests are done!\n");
    return result;
}