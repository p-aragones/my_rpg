/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_items
*/

#include "game.h"

void set_item_scale(elem_t **items)
{
    int i = 0;

    while (items[i]) {
        sfSprite_setScale(items[i]->sprite, SCALE_OBJ);
        i++;
    }
}

elem_t **init_items(void)
{
    elem_t **items = malloc(sizeof(elem_t *) * (4 + 1));

    if (!items)
        return (NULL);
    items[0] = create_elem(ARROW_TEXTURE, POS_BALL, OBJ_RECT);
    items[1] = create_elem(CROSS_TEXTURE, POS_BALL, OBJ_RECT);
    items[2] = create_elem(SNACK_TEXTURE, POS_BALL, OBJ_RECT);
    items[3] = create_elem(WHIP_TEXTURE, POS_BALL, OBJ_RECT);
    items[4] = NULL;
    set_item_scale(items);
    return (items);
}