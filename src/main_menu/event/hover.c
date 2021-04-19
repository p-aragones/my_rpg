/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** hover.c
*/

#include "main_menu.h"

void hover(button_t *button)
{
    button->status = HOVER;
    sfSprite_setTexture(button->elem->sprite, button->hover_texture, sfTrue);
}