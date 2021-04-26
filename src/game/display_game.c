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
    sfRenderWindow_drawSprite(window, room->door->sprite, NULL);
    sfSprite_setPosition(room->backdoor->sprite, room->backdoor->pos);
    sfRenderWindow_drawSprite(window, room->backdoor->sprite, NULL);
}

void draw_player(player_t *player, sfRenderWindow *window)
{
    sfSprite_setTextureRect(player->elem->sprite, player->elem->rect);
    sfSprite_setPosition(player->elem->sprite, player->elem->pos);
    sfRenderWindow_drawSprite(window, player->elem->sprite, NULL);
}

void draw_enemies(enemy_t **enemies, sfRenderWindow *window)
{
    int i = 0;

    while (enemies[i]) {
        sfSprite_setPosition(enemies[i]->elem->sprite, enemies[i]->elem->pos);
        sfRenderWindow_drawSprite(window, enemies[i]->elem->sprite, NULL);
        i++;
    }
}

void display_game(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    draw_room(game->room, window);
    draw_player(game->player, window);
    if (game->room->enemies != NULL)
        draw_enemies(game->room->enemies, window);
    sfRenderWindow_display(window);
}