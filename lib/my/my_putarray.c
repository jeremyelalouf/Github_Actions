/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_putarray
*/

#include <stddef.h>
#include "my.h"

void my_putarray(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}
