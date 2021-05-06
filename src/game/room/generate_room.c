/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** generate_room
*/

#include "game.h"

void free_room(room_t *room)
{
    int i = 0;

    while (room->enemies[i]) {
        free_elem(room->enemies[i]->elem);
        i++;
    }
    free(room->enemies);
    room->enemies = NULL;
}

int generate_room(game_t *game)
{
    sfSound_play(game->sounds->door);
    game->hud->room->num += 1;
    if (game->room->enemies)
        free_room(game->room);
    if (generate_enemies(game) == NULL)
        return (84);
    sfText_setString(game->hud->room->text, my_its(game->hud->room->num));
    game->player->elem->pos.x = 20;
    if (game->room->backdoor->pos.x != 20)
        game->room->backdoor->pos.x = 20;
    game->room->locked = 1;
}