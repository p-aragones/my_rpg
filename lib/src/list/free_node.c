/*
** EPITECH PROJECT, 2020
** list
** File description:
** free_node.c
*/

#include "list.h"

void free_node(control_t *control, list_t *node)
{
    free(node->tower);
    if (!node->next)
        control->last = node->prev;
    free(node);
}