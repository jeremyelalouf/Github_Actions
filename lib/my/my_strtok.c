/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strtok
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
            return (i);
    }
    return ERR;
}

static int get_token_size(char *str, const char *delim, int token_size)
{
    int count = 0;

    for (int i = token_size; str[i] != '\0'; i++) {
        if (is_delim(str[i], delim))
            break;
        count++;
    }
    return (count);
}

static char *tokenise(char *str, const char *delim)
{
    int token_index = get_token_index(str, delim);
    int token_size;
    char *result;

    if (token_index == -1)
        return NULL;
    token_size = get_token_size(str, delim, token_index);
    result = malloc(sizeof(char) * (token_size + 1));
    if (result == NULL)
        return NULL;
    for (int i = token_index; i != token_size + token_index; i++)
        result[i - token_index] = str[i];
    result[token_size] = '\0';
    return result;
}

char *my_strtok(char *str, const char *delim)
{
    static char *stack;
    char *result;

    if (str == NULL) {
        result = tokenise(stack, delim);
        if (result == NULL) {
            return NULL;
        }
        stack += get_token_index(stack, delim);
        stack += my_strlen(result);
        return (result);
    }
    stack = str;
    result = tokenise(str, delim);
    if (result == NULL)
        return NULL;
    stack += get_token_index(str, delim);
    stack += my_strlen(result);
    return (result);
}
