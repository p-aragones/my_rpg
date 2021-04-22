/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** movement
*/

#include "game.h"

void move_player(player_t *player, int x, int y)
{
    float vertical = y * player->speed * -1;
    float horizontal = x * player->speed;

    player->elem->pos.x += horizontal;
    player->elem->pos.y += vertical;
}