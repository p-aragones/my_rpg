/*
** EPITECH PROJECT, 2021
** main_menu
** File description:
** main_menu
*/

#include "main_menu.h"

int main_menu(window_t *window)
{
    sfEvent event;
    menu_t *menu = init_main_menu();
    int in_menu = 0;

    if (!menu)
        return (84);
    while (!in_menu && sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        in_menu = analyse_event(window, event, menu->buttons, menu);
        if (in_menu)
            return (in_menu);
        display_main_menu(window, menu);
        sfRenderWindow_display(window->window);
    }
    return (0);
}