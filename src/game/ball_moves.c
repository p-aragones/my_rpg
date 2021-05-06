/*
** EPITECH PROJECT, 2021
** ball
** File description:
** moving
*/

#include "game.h"

void get_direction(game_t *game, int a)
{
    if (game->ball->pos.x < 0 || game->ball->pos.x > 1920
    || game->ball->pos.y < 0 || game->ball->pos.y > 1080) {
        if (a == 1)
            game->ball_dir = 1;
        if (a == 2)
            game->ball_dir = 2;
        if (a == 3)
            game->ball_dir = 3;
        if (a == 4)
            game->ball_dir = 4;
        if (a > 0 && a < 5) {
            game->ball->pos.x = game->player->elem->pos.x + 40;
            game->ball->pos.y = game->player->elem->pos.y + 32;
            sfSound_play(game->sounds->shoot);
        }
    }
}

int ball_moves(sfEvent event, game_t *game, int a)
{
    get_direction(game, a);
    if (game->ball_dir == 1) {
        game->ball->pos.x += -30;
    }
    if (game->ball_dir == 2) {
        game->ball->pos.y += -30;
    }
    if (game->ball_dir == 3) {
        game->ball->pos.y += 30;
    }
    if (game->ball_dir == 4) {
        game->ball->pos.x += 30;
    }
    return (0);
}