/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** resume.c
*/

#include "pause.h"

int resume(window_t *window, menu_t *menu, button_t *button)
{
    (void)window;
    (void)button;
    free_elem(menu->elem);
    return (2);
}