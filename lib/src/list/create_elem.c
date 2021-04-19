/*
** EPITECH PROJECT, 2020
** create_elem.c
** File description:
** create an element for the list
*/

#include "lib.h"
#include <stdlib.h>

list_t *create_elem_list(struct tower_s *tower)
{
    list_t *elem = malloc(sizeof(list_t));

    if (elem == NULL)
        return (NULL);
    elem->tower = tower;
    elem->next = NULL;
    elem->prev = NULL;
    return (elem);
}
