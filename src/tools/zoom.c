/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** make a zoom
*/

#include "rpg.h"

void zoom(sfRenderWindow *window, sfSprite *sprite)
{
    int i = 0;
    sfVector2f vec;
    vec.x = 1;
    vec.y = 1;

    while (i != 50) {
        vec.x += 0.2;
        vec.y += 0.2;
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfSprite_setScale(sprite, vec);
        sfRenderWindow_display(window);
        i++;
    }
}