/*
** EPITECH PROJECT, 2021
** ball
** File description:
** moving
*/

#include "game.h"

int ball_moves(sfEvent event, game_t *game, int a)
{
    if (game->ball->pos.x < 0 || game->ball->pos.x > 1920
    || game->ball->pos.y < 0 || game->ball->pos.y > 1080 || (a == 0 &&
    (game->ball->pos.x >= game->player->elem->pos.x - 20
    && game->ball->pos.x <= game->player->elem->pos.x + 20
    && game->ball->pos.y >= game->player->elem->pos.y - 20
    && game->ball->pos.y <= game->player->elem->pos.y + 20))) {
        game->ball->pos.x = game->player->elem->pos.x;
        game->ball->pos.y = game->player->elem->pos.y;
        return (0);
    }
    if (a == 1 || game->ball->pos.x < game->player->elem->pos.x) {
        game->ball->pos.x += -40;
        return (0);
    }
    if (a == 2 || game->ball->pos.y < game->player->elem->pos.y) {
        game->ball->pos.y += -40;
        return (0);
    }
    if (a == 3 || game->ball->pos.y > game->player->elem->pos.y) {
        game->ball->pos.y += 40;
        return (0);
    }
    if (a == 4 || game->ball->pos.x > game->player->elem->pos.x) {
        game->ball->pos.x += 40;
        return (0);
    }
    return (0);
}