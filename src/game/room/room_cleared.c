/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** room_cleared
*/

#include "game.h"

void room_cleared(game_t *game)
{
    game->room->locked = 0;
    if (game->hud->room->num != 0 && game->hud->room->num % 2 == 0){
        game->room->heart->pos.x = 1920 / 2;
        game->room->heart->pos.y = 1080 / 2;
        sfSprite_setPosition(game->room->heart->sprite, game->room->heart->pos);
        game->room->h_dropped = 1;
    }
}