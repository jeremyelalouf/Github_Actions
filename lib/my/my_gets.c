/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_gets
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *my_gets(char *buffer, int size)
{
    int return_buf = 0;

    return_buf = read(0, buffer, size - 1);
    if (return_buf == -1)
        return (NULL);
    buffer[size - 1] = '\0';
    return (buffer);
}
