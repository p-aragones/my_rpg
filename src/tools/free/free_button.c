/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** free_button
*/

#include "tools.h"

void free_button(button_t *button)
{
    sfTexture_destroy(button->hover_texture);
    sfTexture_destroy(button->click_texture);
    free_elem(button->elem);
}

void free_buttons(button_t **buttons)
{
    int i = 0;

    while (buttons[i]) {
        free_button(buttons[i]);
        i++;
    }
    free(buttons);
}