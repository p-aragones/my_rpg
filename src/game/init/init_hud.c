/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_hud
*/

#include "game.h"

elem_t **init_hearts(void)
{
    elem_t **hearts = malloc(sizeof(elem_t *) * (3 + 1));
    int i = 0;

    while (i < 3) {
        hearts[i] = create_elem(HEART_TEXTURE, POS_HEART, RECT_HEART);
        sfSprite_setScale(hearts[i]->sprite, SCALE_HEART);
        hearts[i]->pos.x += i * 37;
        sfSprite_setPosition(hearts[i]->sprite, hearts[i]->pos);
        if (!hearts[i])
            return (NULL);
        i++;
    }
    hearts[i] = NULL;
    return (hearts);
}

hud_t *init_hud(void)
{
    hud_t *hud = malloc(sizeof(hud_t));

    if (!hud)
        return (NULL);
    hud->hearts = init_hearts();
    return (hud);
}