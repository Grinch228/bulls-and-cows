#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include <string.h>
#include <time.h>
#define SIZE 4

void randomizer(int *mas)
{
    int range[10];
    int size = 10;
    int n;
    
    for (int i = 0; i < 10; i++) {
        range[i] = i;
    }
    
    srand(time(NULL));
    
    for (int i = 0; i < SIZE; i++) {
        n = getrand(0, size - 1);
        mas[i] = range[n];
        range[n] = range[size - 1];
        size--;
    }
}

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

int startup_options_check(int argc, char **argv)
{
    int n = 0;
    if (argc == 1 || atoi(argv[2]) == 0) {
        n = 10;
    } else {
        n = atoi(argv[2]);
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

