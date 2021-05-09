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

    if (room->enemies) {
        while (room->enemies[i]) {
            free_elem(room->enemies[i]->elem);
            i++;
        }
    }
    free(room->enemies);
    room->enemies = NULL;
}

void reset_item_pos(elem_t **items)
{
    int i = 0;

    while (items[i]) {
        sfSprite_setPosition(items[i]->sprite, POS_BALL);
        sfRectangleShape_setPosition(items[i]->hitbox, POS_BALL);
        i++;
    }
}

int generate_room(game_t *game, sfRenderWindow *window)
{
    game->current_room++;
    game->max_room++;
    game->item_dropped = 0;
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
    if (game->room->heart) {
        game->room->heart->pos = START_OBJ;
        game->room->h_dropped = 0;
    }
    save_info(game, window);
    dust_effect(window, game);
}