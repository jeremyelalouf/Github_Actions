/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int a = 0;

    if (p == 0)
        return TRUE;
    if (p < 0)
        return NO_ERR;
    a = nb * my_compute_power_rec(nb, p - 1);
    return (a);
}
