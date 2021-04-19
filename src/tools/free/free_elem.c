/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** free_elem
*/

#include "tools.h"

void free_elem(elem_t *elem)
{
    sfSprite_destroy(elem->sprite);
    sfTexture_destroy(elem->texture);
    free(elem);
}