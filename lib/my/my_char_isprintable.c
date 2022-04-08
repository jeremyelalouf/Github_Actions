/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_char_isprintable
*/

#include "my.h"

int my_char_isprintable(char const a)
{
    if (a < 32)
        return NO_ERR;
    return TRUE;
}
