/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** pause_menu.c
*/

#include "pause.h"
#include "main_menu.h"

int pause_menu(window_t *window)
{
    sfEvent event;
    menu_t *menu = init_pause_menu();
    int in_menu = 0;

    if (!menu)
        return (84);
    while (!in_menu && sfRenderWindow_isOpen(window->window)) {
        sfRenderWindow_clear(window->window, sfBlack);
        in_menu = analyse_event(window, event, menu->buttons, menu);
        if (in_menu != 0)
            return (in_menu);
        display_pause(window, menu);
        sfRenderWindow_display(window->window);
    }
    return (1);
}