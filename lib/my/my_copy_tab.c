/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_copy_tab
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char **my_tab_copy(char *tab[])
{
    int tab_size = 0;
    char **result;

    for (; tab[tab_size] != NULL; tab_size++);
    result = malloc(sizeof(char *) * (tab_size + 1));
    if (result == NULL)
        return (NULL);
    result[tab_size] = NULL;
    for (int i = 0; tab[i] != NULL; i++) {
        result[i] = my_strdup(tab[i]);
        if (result[i] == NULL)
            return (NULL);
    }
    return (result);
}
