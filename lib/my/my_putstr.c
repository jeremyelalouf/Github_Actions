/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    while (*str != '\0'){
        my_putchar(*str);
        str++;
    }
    return NO_ERR;
}
