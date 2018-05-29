#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#define SIZE 4

int main(int argc, char **argv)
{

    int attempts = 0, cows = 0, bulls = 0, player_digit[4], arr[SIZE],
    attem_count = startup_options_check(argc, argv);
    
    randomizer(arr);
    
    if (attem_count  == 0) {
        printf("У вас бесконечное количество попыток!\n");
        while (bulls != 4) {
            string_to_int(player_digit);
            attempts++;
            cows = cows_counter(arr, player_digit);
            bulls = bulls_counter(arr, player_digit);
            print_bullscows(bulls, cows-bulls);
        }
    } else {
        while ((bulls != 4) && (attempts < attem_count)) {
            printf("У вас осталось %d попыток.\n", attem_count - attempts);
            string_to_int(player_digit);
            attempts++;
            cows = cows_counter(arr, player_digit);
            bulls = bulls_counter(arr, player_digit);
            print_bullscows(bulls, cows-bulls);
        }
    }
    print_result(bulls, arr, attempts);
    return 0;
}
