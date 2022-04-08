/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_isneg
*/

#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return NO_ERR;
}
