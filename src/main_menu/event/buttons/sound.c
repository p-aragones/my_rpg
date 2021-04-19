/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** sound.c
*/

#include "main_menu.h"

int sound_click(window_t *window, menu_t *menu, button_t *button)
{
    (void)menu;
    (void)window;
    if (button->status != CLICK) {
        button->status = CLICK;
        sfSprite_setTexture(button->elem->sprite,
        button->click_texture, sfTrue);
        sfMusic_setVolume(window->music, 0);
    } else {
        button->status = NONE;
        sfSprite_setTexture(button->elem->sprite,
        button->elem->texture, sfTrue);
        sfMusic_setVolume(window->music, 100);
    }
    return (0);
}