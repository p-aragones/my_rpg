/*
** EPITECH PROJECT, 2021
** my_str_to_int
** File description:
** convert int to string
*/

#include "lib.h"

char *my_its(int nbr)
{
    char *str;

    if (nbr > 9) {
        str = malloc(sizeof(char) * 3);
        str[0] = nbr / 10 + 48;
        str[1] = nbr % 10 + 48;
        str[2] = '\0';
    } else {
        str = malloc(sizeof(char) * 2);
        str[0] = nbr + 48;
        str[1] = '\0';
    }
    return (str);
}