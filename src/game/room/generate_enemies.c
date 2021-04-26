/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** generate_enemies
*/

#include "game.h"

game_t *generate_enemies(game_t *game)
{
    int n_enemies = (rand() % 3) + 3;
    game->room->enemies = malloc(sizeof(enemy_t *) * (n_enemies + 1));
    int i = 0;

    if (!game->room->enemies)
        return (NULL);
    game->room->n_enemies = n_enemies;
    while (i < n_enemies) {
        game->room->enemies[i] = malloc(sizeof(enemy_t));
        if (!game->room->enemies[i])
            return (NULL);
    }
}