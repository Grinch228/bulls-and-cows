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

