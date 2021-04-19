/*
** EPITECH PROJECT, 2020
** B-PSU-200-BAR-2-1-mysokoban-leon.ducasse
** File description:
** copy_str_array.c
*/

#include "lib.h"

char **copy_array(char **array)
{
    char **new_array = malloc(sizeof(char *) * (size_array(array) + 1));
    int x = 0;

    if (!new_array)
        return (NULL);
    while (array[x]) {
        new_array[x] = my_strdup(array[x]);
        if (!new_array[x])
            return (NULL);
        x++;
    }
    new_array[x] = NULL;
    return (new_array);
}