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
    sfVector2u size = (sfVector2u) {0, 0};
    sfVector2f scale = (sfVector2f) {0, 0};

    if (!items)
        return (NULL);
    scale = SCALE_OBJ;
    size = (sfVector2u) {32 * scale.x, 32 * scale.y};
    items[0] = create_elem(ARROW_TEXTURE, POS_BALL, OBJ_RECT);
    items[0]->hitbox = create_rectangle(POS_BALL, sfYellow, size);
    items[1] = create_elem(CROSS_TEXTURE, POS_BALL, OBJ_RECT);
    items[1]->hitbox = create_rectangle(POS_BALL, sfYellow, size);
    items[2] = create_elem(SNACK_TEXTURE, POS_BALL, OBJ_RECT);
    items[2]->hitbox = create_rectangle(POS_BALL, sfYellow, size);
    items[3] = create_elem(WHIP_TEXTURE, POS_BALL, OBJ_RECT);
    items[3]->hitbox = create_rectangle(POS_BALL, sfYellow, size);
    items[4] = NULL;
    set_item_scale(items);
    return (items);
}