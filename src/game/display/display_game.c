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

void draw_player(player_t *player, sfRenderWindow *window)
{
    sfSprite_setTextureRect(player->elem->sprite, player->elem->rect);
    sfSprite_setPosition(player->elem->sprite, player->elem->pos);
    sfRenderWindow_drawSprite(window, player->elem->sprite, NULL);
    sfRenderWindow_drawRectangleShape(window, player->hitbox, NULL);
}

void draw_enemies(enemy_t **enemies, sfRenderWindow *window)
{
    int i = 0;

    while (enemies[i]) {
        sfSprite_setPosition(enemies[i]->elem->sprite, enemies[i]->elem->pos);
        sfRenderWindow_drawSprite(window, enemies[i]->elem->sprite, NULL);
        sfRenderWindow_drawRectangleShape(window, enemies[i]->hitbox, NULL);
        i++;
    }
}

void draw_ball(elem_t *ball, sfRenderWindow *window)
{
    sfSprite_setPosition(ball->sprite, ball->pos);
    sfRenderWindow_drawSprite(window, ball->sprite, NULL);
}

bool check_colision_rectangle(sfRectangleShape *r1, sfRectangleShape *r2)
{
    sfVector2f r1_pos = sfRectangleShape_getPosition(r1);
    sfVector2f r2_pos = sfRectangleShape_getPosition(r2);
    sfVector2f r1_size = sfRectangleShape_getSize(r1);
    sfVector2f r2_size = sfRectangleShape_getSize(r2);
    bool collision_x = r1_pos.x + r1_size.x >= r2_pos.x &&
    r2_pos.x + r2_size.x >= r1_pos.x;
    bool collision_y = r1_pos.y + r1_size.y >= r2_pos.y &&
    r2_pos.y + r2_size.y >= r1_pos.y;

    return (collision_x && collision_y);
}

void check_colision_to_player(game_t *game)
{
    sfRectangleShape *player = game->player->hitbox;

    if (!game->room->enemies)
        return;
    for (int i = 0; game->room->enemies[i]; i++) {
        if (check_colision_rectangle(player, game->room->enemies[i]->hitbox))
            game->player->health--;
    }
}

void display_game(game_t *game, sfRenderWindow *window)
{
    sfRenderWindow_clear(window, sfBlack);
    draw_room(game->room, window);
    draw_player(game->player, window);
    if (game->hud->room->num == 0)
        draw_npc(game->player, game->npc, window);
    if (game->room->enemies != NULL)
        draw_enemies(game->room->enemies, window);
    draw_ball(game->ball, window);
    draw_hud(game->hud, game->player->health, window);
    check_colision_to_player(game);
    sfRenderWindow_display(window);
}