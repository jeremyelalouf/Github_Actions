/*
** EPITECH PROJECT, 2021
** mylib
** File description:
** my_revstr
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    char c;

    for (int i = 0; i < len; i++) {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        len--;
    }
    return (str);
}
