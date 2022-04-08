/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_len_cmp
*/

#include "my.h"

int len_cmp(char *str1, char *str2)
{
    if (my_strlen(str1) > my_strlen(str2))
        return TRUE;
    return NO_ERR;
}
