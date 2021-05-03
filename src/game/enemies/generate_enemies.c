/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** generate_enemies
*/

#include "game.h"

enemy_t *create_enemy(void)
{
    enemy_t *enemy = NULL;
    int random = rand() % 5;

    if (random == 0)
        enemy = create_bat(BAT_STATS);
    if (random == 1)
        enemy = create_dip(DIP_STATS);
    if (random == 2)
        enemy = create_ghost(GHOST_STATS);
    if (random == 3)
        enemy = create_head(HEAD_STATS);
    if (random == 4)
        enemy = create_spike(SPIKE_STATS);
    if (!enemy)
        return (NULL);
    return (enemy);
}

game_t *no_boss(game_t *game)
{
    int n_enemies = (rand() % 3) + 3;
    game->room->enemies = malloc(sizeof(enemy_t *) * (n_enemies + 1));
    int i = 0;

    if (!game->room->enemies)
        return (NULL);
    game->room->n_enemies = n_enemies;
    while (i < n_enemies) {
        game->room->enemies[i] = create_enemy();
        if (!game->room->enemies[i])
            return (NULL);
        i++;
    }
    game->room->enemies[i] = NULL;
}

game_t *generate_boss(game_t *game)
{
    game->room->enemies = malloc(sizeof(enemy_t *) * (1 + 1));

    if (!game->room->enemies)
        return (NULL);
    game->room->n_enemies = 1;
    game->room->enemies[0] = create_enemy();
    game->room->enemies[0]->health = 50;
    game->room->enemies[1] = NULL;
    sfSprite_setScale(game->room->enemies[0]->elem->sprite, SCALE_BOSS);
}

game_t *generate_enemies(game_t *game)
{
    if (game->hud->room->num % 5 == 0)
        game = generate_boss(game);
    else
        game = no_boss(game);
    return (game);
}