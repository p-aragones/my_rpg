/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_items
*/

#include "game.h"

void draw_items(elem_t **items, sfRenderWindow *window)
{
    int i = 0;

    while (items[i]) {
        sfRenderWindow_drawSprite(window, items[i]->sprite, NULL);
        i++;
    }
}