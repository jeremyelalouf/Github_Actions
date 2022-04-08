/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** my_strcapitalize
*/

#include <stddef.h>

char *my_strcapitalize(char *str)
{
    str[0] = str[0] - 32;
    return (str);
}
