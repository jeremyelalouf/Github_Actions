/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_char_is_num
*/

#include "my.h"

int my_char_isnum(char a)
{
    if (a > 57 || a < 48)
        return NO_ERR;
    else
        return TRUE;
}
