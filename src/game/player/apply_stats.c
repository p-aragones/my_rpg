/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** apply_stats
*/

#include "game.h"

void apply_stats(game_t *game, int item)
{
    if (item != -1) {
        if (item == 0)
            game->player->dmg++;
        if (item == 1)
            game->player->speed++;
        if (item == 2)
            game->speed_ball += 5;
        if (item == 3) {
            game->player->dmg += 2;
            game->player->speed -= 2;
        }
    }
    if (game->player->speed <= 0)
        game->player->speed = 1;
}