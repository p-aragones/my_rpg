/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_items
*/

#include "game.h"

void draw_items(elem_t **items, sfRenderWindow *window, int hitboxes)
{
    int i = 0;

    while (items[i]) {
        sfRenderWindow_drawSprite(window, items[i]->sprite, NULL);
        if (hitboxes > 0)
            sfRenderWindow_drawRectangleShape(window, items[i]->hitbox, NULL);
        i++;
    }
}