#ifndef GameFunctions
#define GameFunctions

void print_bullscows(int bulls,int cows);

void string_to_int(int *digitmas);

void print_result(int bulls, int *arr, int attempts);

void randomizer(int *mas);

int bulls_counter(int *array_b, int *player_num);

int cows_counter(int *array_c, int *player_n);

int is_digit_check(const char *str);

int startup_options_check(int argc, char **argv);

int has_repeating_digits(const char *num);

#endif
