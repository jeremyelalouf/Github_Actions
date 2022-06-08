/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_tablen
*/

#include <unistd.h>
#include "my.h"

int my_tablen(char *tab[])
{
    int tab_len = 0;

    if (tab == NULL)
        return ERR;
    for (; tab[tab_len] != NULL; tab_len++);
    return (tab_len);
}
