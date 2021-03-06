/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** follow_player
*/

#include "game.h"

void follow_player(player_t *player, enemy_t **enemies, game_t *game)
{
    int i = 0;

    check_colision_to_player(game);
    check_colision_ball_enemies(game);
    while (enemies[i]) {
        if (enemies[i]->elem->pos.x - 32 < player->elem->pos.x)
            enemies[i]->elem->pos.x += enemies[i]->speed;
        else
            enemies[i]->elem->pos.x -= enemies[i]->speed;
        if (enemies[i]->elem->pos.y < player->elem->pos.y)
            enemies[i]->elem->pos.y += enemies[i]->speed;
        else
            enemies[i]->elem->pos.y -= enemies[i]->speed;
        sfRectangleShape_setPosition(enemies[i]->hitbox, enemies[i]->elem->pos);
        i++;
    }
}