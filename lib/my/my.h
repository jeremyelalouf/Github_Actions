/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #define ATOD(x) (x - '@')
    #define ADTOD(x) (x - '0')
    #define DTOA(x) (x + '0')
    #define NO_ERR      0
    #define ERR         -1
    #define EXIT_ERR    84
    #define TRUE        1
    #define FALSE       0

int my_char_isalpha(const char);

int my_charislower(const char);

int my_char_isnum(char);

char *my_strtok(char *, const char *);

int my_char_isprintable(char const);

int my_compute_power_rec(int, int);

int my_compute_square_root(int);

char **my_tab_copy(char *[]);

int my_find_prime_sup(int);

void my_free_array(char **);

int my_getnbr(char *);

char *my_gets(char *, int);

int my_is_prime(int);

int my_isneg(int);

int len_cmp(char *, char *);

char **my_malloc_tab(int);

void *my_memset(void *, int, int);

void my_putarray(char **);

void my_putchar(char);

void my_put_nbr(int);

int my_putstr(char const *);

char *my_revstr(char *);

int my_str_isalpha(char const *);

int my_str_islower(char const *);

int my_str_isnum(char const *);

int my_str_isprintable(char const *);

int my_str_isupper(char const *);

char *my_strcapitalize(char *);

char *my_strcat(char *, char const *);

int my_strcmp(const char *, const char *);

char * my_strcpy(char *, char const *);

char *my_strdup(char const *);

int my_strlen(char const *);

char *my_strlowcase(char *);

char *my_strncat(char *, char const *, int);

int my_strncmp(char const *, char const *, int);

char *my_strncpy(char *, char const *, int);

char *my_strupcase(char *);

void *my_realloc(void *, int, int);

char **my_str_to_word_array(char *, const char *);

void my_swap(int *, int *);

int my_tablen(char *[]);

#endif/* MY_H_ */
