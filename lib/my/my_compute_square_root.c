/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_compute_square_root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int i = 1;
    int result = 0;

    if (nb <= 0)
        return NO_ERR;
    for (;result != nb; i++) {
        result = i * i;
        if (result > nb)
            return NO_ERR;
    }
    return (i - 1);
}
