/*
** EPITECH PROJECT, 2020
** add_start.c
** File description:
** add element add the beggining of the list
*/

#include "lib.h"

control_t *add_start(control_t *list, struct tower_s *tower)
{
    list_t *elem = create_elem_list(tower);

    if (elem == NULL)
        return (NULL);
    if (list->first == NULL) {
        list->first = elem;
        list->last = elem;
        list->size = 1;
        return (list);
    }
    elem->next = list->first;
    list->first->prev = elem;
    list->first = elem;
    list->size++;
    return (list);
}
