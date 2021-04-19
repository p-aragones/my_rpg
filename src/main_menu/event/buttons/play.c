/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** play.c
*/

#include "main_menu.h"

int play_click(window_t *window, menu_t *menu, button_t *button)
{
    if (click(window, menu, button) == 84)
        return (84);
    return (game(window));
}