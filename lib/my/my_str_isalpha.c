/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if ((str[a] < 'a' || str[a] > 'z') && (str[a] < 'A' || str[a] > 'Z'))
            return NO_ERR;
        a++;
    }
    return TRUE;
}
