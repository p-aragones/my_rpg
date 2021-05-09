/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** monster_dead.c
*/

#include "game_struct.h"

void monster_dead(game_t *game, int i)
{
    if (game->room->enemies[i]->health <= 0) {
        game->room->n_enemies--;
    }
}