/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** malloc_my_tab
*/

#include <stdlib.h>

char **my_malloc_tab(int nbr_rows)
{
    char **tab = malloc(sizeof(char *) * (nbr_rows + 1));

    tab[nbr_rows] = NULL;
    return (tab);
}
