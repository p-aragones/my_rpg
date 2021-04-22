/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** display_game
*/

#include "game.h"

void draw_room(room_t *room, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, room->elem->sprite, NULL);
}

void draw_player(player_t *player, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, player->elem->sprite, NULL);
}

void display_game(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    draw_room(game->room, window);
    draw_player(game->player, window);
    sfRenderWindow_display(window);
}