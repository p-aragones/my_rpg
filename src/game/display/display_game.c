/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** display_game
*/

#include "game.h"
#include <stdbool.h>

void draw_room(room_t *room, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, room->elem->sprite, NULL);
    sfRenderWindow_drawSprite(window, room->door->sprite, NULL);
    sfSprite_setPosition(room->backdoor->sprite, room->backdoor->pos);
    sfRenderWindow_drawSprite(window, room->backdoor->sprite, NULL);
}

void draw_player(player_t *player, sfRenderWindow *window, int hitbox)
{
    sfSprite_setTextureRect(player->elem->sprite, player->elem->rect);
    sfSprite_setPosition(player->elem->sprite, player->elem->pos);
    sfRenderWindow_drawSprite(window, player->elem->sprite, NULL);
    if (hitbox > 0)
        sfRenderWindow_drawRectangleShape(window, player->hitbox, NULL);
}

void draw_enemies(enemy_t **enemies, sfRenderWindow *window, int hitbox)
{
    int i = 0;

    while (enemies[i]) {
        if (enemies[i]->health > 0) {
            sfSprite_setPosition(enemies[i]->elem->sprite,
            enemies[i]->elem->pos);
            sfRenderWindow_drawSprite(window, enemies[i]->elem->sprite, NULL);
            if (hitbox > 0)
                sfRenderWindow_drawRectangleShape(window,
                enemies[i]->hitbox, NULL);
        }
        i++;
    }
}

void draw_ball(elem_t *ball, sfRenderWindow *window, int hitbox)
{
    sfSprite_setPosition(ball->sprite, ball->pos);
    sfRenderWindow_drawSprite(window, ball->sprite, NULL);
    if (hitbox > 0)
        sfRenderWindow_drawRectangleShape(window, ball->hitbox, NULL);
}

void display_game(game_t *game, sfRenderWindow *window)
{
    if (game->current_room != 0)
        game->room->backdoor->pos.x = 20;
    else
        game->room->backdoor->pos.x = -100;
    sfRenderWindow_clear(window, sfBlack);
    draw_room(game->room, window);
    if (game->room->h_dropped == 1)
        sfRenderWindow_drawSprite(window, game->room->heart->sprite, NULL);
    draw_player(game->player, window, game->hud->hitboxes);
    if (game->current_room == 0 ||
    (game->current_room % 5 == 0 && game->room->n_enemies <= 0))
        draw_npc(game->player, game->npc, window, game);
    if (game->room->enemies != NULL)
        draw_enemies(game->room->enemies, window, game->hud->hitboxes);
    draw_ball(game->ball, window, game->hud->hitboxes);
    draw_hud(game->hud, game->player->health, window, game);
    draw_items(game->items, window);
    sfRenderWindow_display(window);
}