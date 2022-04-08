/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** isupper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            return NO_ERR;
    }
    return TRUE;
}
