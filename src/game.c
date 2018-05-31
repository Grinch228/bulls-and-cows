#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include <string.h>
#include <time.h>
#define SIZE 4

void print_bullscows(int bulls, int cows) 
{
    printf("Кол-во 'Быков' = %d\n", bulls);
    printf("Кол-во 'Коров' = %d\n", cows);
}

void string_to_int(int *digitmas)
{
    int i = 0;
    char *str = malloc(sizeof(char));
    printf("Введите четырёхзначное число:");
    fgets(str, 15, stdin);

    if ((digit_check(str)) && (repeat_digits(str))) {
        for (i = 0; i < SIZE; i++)
            digitmas[i] = str[i] - 48;
    } else {
        string_to_int(digitmas);
    }
}

void print_result(int bulls, int *arr, int attempts)
{
    int i = 0;
    if(bulls!=4){
        printf("Вы проиграли!Загаднное число: ");
        for(i = 0; i < 4; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    } else { 
        printf("Поздравляю, вы угадали число с %d попытки!\n", attempts);
    }
}

int getrand(int min, int max)
{
    return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}


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

int digit_check(const char *str)
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

int repeat_digits(const char *num) {
    int i, j;
    for (i=0; i<strlen(num)-1; i++) {
        for (j=i+1; j<strlen(num); j++) {
            if (num[j] == num[i]) {
                printf("Неверный ввод, попробуйте ещё раз.\n");
                return 0;
            }
        }
    }
    return 1;
}

