/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** display.c
*/

#include "rpg.h"

void display(sfRenderWindow *window, elem_t *elem)
{
    sfSprite_setTextureRect(elem->sprite, elem->rect);
    sfSprite_setPosition(elem->sprite, elem->pos);
    sfRenderWindow_drawSprite(window, elem->sprite, NULL);
}