/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_free_array
*/

#include <stddef.h>
#include <stdlib.h>

void my_free_array(char **array)
{
    int i = 0;

    for (i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
