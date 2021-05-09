/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** take_heart
*/

#include "game.h"

void take_ball(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(game->player->elem->sprite);

    if (game->current_room == 0 && game->npc->dropped == 1) {
        if ((pos.x >= 1920 / 2 - 54 && pos.x <= 1920 / 2 + 54) &&
        (pos.y >= 1080 / 2 - 142 && pos.y <= 1080 / 2 + 142)) {
            game->npc->ball->pos.x = -100;
            sfSprite_setPosition(game->npc->ball->sprite,
            game->npc->ball->pos);
            game->can_shoot = 1;
        }
    }
}

void take_heart(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(game->player->elem->sprite);

    take_ball(game);
    if (game->room->h_dropped == 1) {
        if ((pos.x >= 1920 / 2 - 32 && pos.x <= 1920 / 2 + 32) &&
        (pos.y >= 1080 / 2 - 32 && pos.y <= 1080 / 2 + 32)) {
            game->player->health++;
            game->room->heart->pos.x = -100;
            sfSprite_setPosition(game->room->heart->sprite,
            game->room->heart->pos);
            game->room->h_dropped = 0;
        }
    }
    if (game->player->health > 10)
        game->player->health = 10;
}