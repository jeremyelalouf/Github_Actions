/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_char_isalpha
*/

int my_char_isalpha(const char letter)
{
    return ((letter >= 'A' && letter <= 'Z') ||
    (letter >= 'a' && letter <= 'z'));
}
