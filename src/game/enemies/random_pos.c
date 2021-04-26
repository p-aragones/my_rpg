/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** random_pos
*/

#include "game.h"

sfVector2f random_pos(void)
{
    int x = (rand() % 1600) + 300;
    int y = (rand() % 1000) + 20;
    sfVector2f pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}