/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** return 1 if only printable characters
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] < 32)
            return NO_ERR;
    }
    return TRUE;
}
