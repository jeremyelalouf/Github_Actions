/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>
#include <stddef.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    char *result = malloc(sizeof(char) *
        (my_strlen(dest) + my_strlen(src)) + 1);
    int i = 0;

    if (result == NULL)
        return (NULL);
    for (; dest[i] != '\0'; i++)
        result[i] = dest[i];
    for (int count = 0; src[count] != '\0'; count++)
        result[i + count] = src[count];
    result[i + my_strlen(src)] = '\0';
    return (result);
}
