/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int nbr = 0;
    int i = 0;
    int j = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            j = j * -1;
        i = i + 1;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + str[i] - '0';
            i = i + 1;
        }
        else
            return (nbr * j);
        }
    return (nbr * j);
}
