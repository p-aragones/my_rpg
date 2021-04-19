/*
** EPITECH PROJECT, 2020
** lib
** File description:
** split
*/

#include "lib.h"

int start_x(char *str, char c, char d)
{
    int x = 0;

    while ((str[x] == c || str[x] == d) && str[x])
            x++;
    return (x);
}

int get_num_word(char *str, char c, char d)
{
    int x = 0;
    int num_word = 1;

    while (str[x]) {
        while ((str[x] == c || str[x] == d) &&
        str[x + 1] != d && str[x + 1] != c && str[x + 1] != '\0') {
            num_word++;
            x++;
        }
        x++;
    }
    return (num_word);
}

int word_len(char *str, int x, char c, char d)
{
    int len = 0;

    while (str[x] != d && str[x] != c && str[x]) {
        x += 1;
        len += 1;
    }
    return (len);
}

char **split(char *str, char c, char d)
{
    int i = 0;
    int x = start_x(str, c, d);
    int num_word = get_num_word(str, c, d);
    char **array = malloc(sizeof(char *) * (num_word + 1));

    while (str[x]) {
        int n = 0;
        array[i] = malloc(sizeof(char) * (word_len(str, x, c, d) + 1));
        while (str[x] != c && str[x] != d && str[x]) {
            array[i][n] = str[x];
            n += 1;
            x += 1;
        }
        array[i++][n] = '\0';
        while ((str[x] == c || str[x] == d) && str[x])
            x++;
    }
    array[i] = NULL;
    return (array);
}