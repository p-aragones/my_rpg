/*
** EPITECH PROJECT, 2021
** ball
** File description:
** moving
*/

#include "game.h"

int ball_moves(sfEvent event, game_t *game)
{
    game->ball->pos.x = game->player->elem->pos.x + 40;
    game->ball->pos.y = game->player->elem->pos.y - 15;
    return (0);
}