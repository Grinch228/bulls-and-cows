#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include <string.h>
#include <time.h>
#define SIZE 4

int bulls_counter(int *array_b, int *player_num)
{

    int b = 0, i = 0;

    for(i = 3; i >= 0; i--) {
        if((array_b[i]) == (player_num[i])){
            b++;
        }
    }
    return b;
}

int cows_counter(int *array_c, int *player_n)
{

    int c = 0, j = 0, i = 0;
    
    for(i = 3; i >= 0; i--) {
        for(j = 3; j >= 0; j--) {
            if((array_c[j]) == (player_n[i])) {
                c++;
            }
        }
    }
    return c;
}

int is_digit_check(const char *str)
{
    int i = 0;
    for(i = 0; i < strlen(str); i++) {
        if ((str[i] >='0') && (str[i] <= '9') && (atoi(str) > 1000) &&
            (str[4] == 10)) {
            return 1;
        }
    }
    printf("Неверный ввод,попробуйте ещё раз.\n");
    return 0;
}

int startup_options_check(int argc, const int arg_v)
{
    int n = 0;
    if (argc == 1) {
        n = 10;
    } else {
        n = arg_v;
    }
    return n;
}

int has_repeating_digits(const char *num) {
    int i, j;
    for (i=0; i<strlen(num)-1; i++) {
        for (j=i+1; j<strlen(num); j++) {
            if (num[j]==num[i]) {
                printf("Неверный ввод, попробуйте ещё раз.\n");
                return 0;
            }
        }
    }
    return 1;
}

