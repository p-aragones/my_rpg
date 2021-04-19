/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** analyse_event.c
*/

#include "main_menu.h"
#include "tools.h"
#include <stdbool.h>

void change_texture(window_t *window, button_t **buttons)
{
    int x = 0;

    while (buttons[x]) {
        if (mouse_hover(window->window, buttons[x]->elem->pos) == 1 &&
        buttons[x]->status != CLICK) {
            buttons[x]->hover_fonc(buttons[x]);
        }
        else if (buttons[x]->status == CLICK)
            sfSprite_setTexture(buttons[x]->elem->sprite,
            buttons[x]->click_texture, sfTrue);
        else
            sfSprite_setTexture(buttons[x]->elem->sprite,
            buttons[x]->elem->texture, sfTrue);
        x++;
    }
}

void place_howto(int x, int status, menu_t *menu)
{
    menu->howto->howto_bg->pos.x = x;
    menu->howto->status = status;
}

void manage_howto(sfEvent event, window_t *window, menu_t *menu)
{
    if (event.type == sfEvtMouseButtonPressed &&
        mouse_hover(window->window, menu->howto->howto->pos) == 1)
        place_howto(0, 1, menu);
    if (event.key.code == sfKeyEscape && menu->howto->status == 1)
        place_howto(1920, 0, menu);
}

int analyse_event(window_t *window, sfEvent event,
button_t **buttons, menu_t *menu)
{
    int x = 0;

    while (sfRenderWindow_pollEvent(window->window, &event)) {
        while (buttons[x]) {
            if (event.type == sfEvtMouseButtonPressed &&
            mouse_hover(window->window, buttons[x]->elem->pos) == 1)
                return (buttons[x]->click_fonc(window, menu, buttons[x]));
            x++;
        }
        manage_howto(event, window, menu);
    }
    change_texture(window, buttons);
    return (0);
}