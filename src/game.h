#ifndef GameFunctions
#define GameFunctions

void randomizer(int *mas);

int bulls_counter(int *array_b, int *player_num);

int cows_counter(int *array_c, int *player_n);

int is_digit_check(const char *str);

int startup_options_check(int argc, char **argv);

int has_repeating_digits(const char *num);

#endif
