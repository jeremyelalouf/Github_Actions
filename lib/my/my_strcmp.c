/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** Compare two strings
*/

#include <unistd.h>
#include "my.h"

int my_strcmp(const char *s1, const char *s2)
{
    if (s2 == NULL && s1 == NULL)
        return NO_ERR;
    if (s2 == NULL || s1 == NULL)
        return ERR;
    for (int a = 0; s1[a] != '\0' && s2[a] != '\0'; a++) {
        if (s1[a] == '\0')
            return s1[a] - s2[a];
        if (s2[a] == '\0')
            return s1[a] - s2[a];
        if (s1[a] != s2[a])
            return TRUE;
    }
    return NO_ERR;
}
