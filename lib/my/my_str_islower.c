/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** islower
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            return NO_ERR;
    }
    return TRUE;
}
