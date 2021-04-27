/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_hud
*/

#include "game.h"

void draw_hearts(hud_t *hud, int lives, sfRenderWindow *window)
{
    int i = 0;

    while (i < lives) {
        sfRenderWindow_drawSprite(window, hud->hearts[i]->sprite, NULL);
        i++;
    }
}

void draw_hud(hud_t *hud, int lives, sfRenderWindow *window)
{
    draw_hearts(hud, lives, window);
}