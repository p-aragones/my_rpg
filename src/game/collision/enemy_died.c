/*
** EPITECH PROJECT, 2021
** enemy_died.c
** File description:
** enemy_died.c
*/

#include "game_struct.h"

void enemy_died(game_t *game, int i)
{
    if (game->room->enemies[i]->health <= 0)
        game->room->n_enemies--;
}