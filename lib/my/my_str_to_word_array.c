/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "my.h"

static int is_delim(char d, const char *delim)
{
    for (int i = 0; delim[i] != '\0'; i++) {
        if (d == delim[i])
            return 1;
    }
    return 0;
}

static int get_token_index(char *str, const char *delim)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (is_delim(str[i], delim) == 0)
            return i;
    }
    return -1;
}

static int get_token_size(char *str, const char *delim, int token_size)
{
    int count = 0;

    for (int i = token_size; str[i] != '\0'; i++) {
        if (is_delim(str[i], delim))
            break;
        count++;
    }
    return count;
}

static int get_array_size(char *str, const char *delim)
{
    int token_index = get_token_index(str, delim);
    char *str_dup = my_strdup(str);
    char *head = str_dup;
    int nbr_words = 0;

    if (str_dup == NULL)
        return -1;
    while (token_index != -1) {
        nbr_words++;
        str_dup += token_index + get_token_size(str_dup, delim, token_index);
        token_index = get_token_index(str_dup, delim);
    }
    free(head);
    return nbr_words;
}

char **my_str_to_word_array(char *str, const char *delim)
{
    int array_size = get_array_size(str, delim);
    char **result = malloc(sizeof(char *) * (array_size + 1));

    if (result == NULL)
        return NULL;
    result[0] = my_strtok(str, delim);
    if (result[0] == NULL)
        return NULL;
    for (int i = 1; i != array_size; i++) {
        result[i] = my_strtok(NULL, delim);
        if (result[i] == NULL)
            return NULL;
    }
    result[array_size] = NULL;
    return result;
}
