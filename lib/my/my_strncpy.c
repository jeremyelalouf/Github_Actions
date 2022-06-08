/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** my_strncpy
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
        if (src[i] == '\0')
            return dest;
    }
    return (dest);
}
