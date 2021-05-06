/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** display_pause.c
*/

#include "pause.h"

void display_pause(window_t *window, menu_t *menu)
{
    int x = 0;

    display(window->window, menu->elem);
    sfSprite_setScale(menu->howto->howto->sprite, SCALE_HOWTO);
    display(window->window, menu->howto->howto);
    while (menu->buttons[x]) {
        display(window->window, menu->buttons[x]->elem);
        x++;
    }
    sfRenderWindow_drawText(window->window, window->fps->text, NULL);
    display(window->window, menu->howto->howto_bg);
}