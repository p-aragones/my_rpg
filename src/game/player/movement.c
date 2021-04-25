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

    if (player->elem->pos.x + horizontal < 1760 &&
    player->elem->pos.x + horizontal > 20)
        player->elem->pos.x += horizontal;
    if (player->elem->pos.y + vertical >= 5 &&
    player->elem->pos.y + vertical < 880)
        player->elem->pos.y += vertical;
}