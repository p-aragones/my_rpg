/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** empty_room
*/

#include "game.h"

void empty_room(game_t *game)
{
    free_room(game->room);
    sfSound_play(game->sounds->door);
    game->current_room++;
    game->player->elem->pos.x = 60;
    game->room->heart->pos.x = -100;
    game->item_dropped = 0;
    reset_item_pos(game->items);
    if (game->current_room != 0)
        game->room->backdoor->pos.x = 20;
    save_info(game, window);
}