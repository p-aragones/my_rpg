/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** generate_room
*/

#include "game.h"

void generate_room(game_t *game)
{
    game->player->elem->pos.x = 20;
    if (game->room->backdoor->pos.x != 20)
        game->room->backdoor->pos.x = 20;
}