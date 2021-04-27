/*
** EPITECH PROJECT, 2021
** ball
** File description:
** moving
*/

#include "game.h"

int ball_moves(sfEvent event, game_t *game)
{
    if (game->ball->pos.x < 0 || game->ball->pos.x > 1920
    || game->ball->pos.y < 0 || game->ball->pos.y > 1080) {
        game->ball->pos.x = game->player->elem->pos.x + 40;
        game->ball->pos.y = game->player->elem->pos.y - 15;
        return (0);
    }
    if (event.key.code == sfKeyA || game->ball->pos.x <= game->player->elem->pos.x) {
        game->ball->pos.x += -15;
        return (0);
    }
    return (0);
}