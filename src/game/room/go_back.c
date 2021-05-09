/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** go_back
*/

#include "game.h"

int back_door(game_t *game, sfVector2f player, sfVector2f door)
{
    if ((player.x >= 20 && player.x <= 40) &&
    (player.y + 64 >= door.y - 90 && player.y + 64 <= door.y)
    && game->current_room != 0 && game->room->locked == 0)
        return (1);
    return (0);
}

void go_back(game_t *game)
{
    free_room(game->room);
    sfSound_play(game->sounds->door);
    game->current_room--;
    game->player->elem->pos.x = 1700;
    game->room->heart->pos.x = -100;
    game->item_dropped = 0;
    reset_item_pos(game->items);
    sfSprite_setPosition(game->room->heart->sprite, game->room->heart->pos);
    if (game->current_room == 0)
        game->room->backdoor->pos.x = -200;
    save_info(game, window);
}