/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_game
*/

#include <time.h>
#include "game.h"
#include "tools.h"

game_t *load_config(game_t *game, window_t *window)
{
    game->player = init_player(window);
    if (!game->player)
        return (NULL);
    game->current_room = window->config->room;
    game->max_room = window->config->level;
    game->hud->room->num = game->max_room;
    sfText_setString(game->hud->room->text, my_its(game->max_room));
}

game_t *init_ball(game_t *game)
{
    sfVector2u size = (sfVector2u) {0, 0};

    game->ball = create_elem(BALL_TEXTURE, POS_BALL, RECT_BALL);
    sfSprite_setScale(game->ball->sprite, SCALE_BALL);
    size = (sfVector2u) {(game->ball->rect.width - game->ball->rect.left) *
    SCALE_BALL.x, (game->ball->rect.height - game->ball->rect.top) *
    SCALE_BALL.y};
    game->ball->hitbox = create_rectangle(POS_BALL, sfRed, size);
    game->ball_dir = 0;
    game->speed_ball = 30;
}

game_t *init_game(window_t *window)
{
    game_t *game = malloc(sizeof(game_t));

    if (!game)
        return (NULL);
    srand(time(NULL));
    game->room = init_room();
    game->hud = init_hud();
    game->npc = init_npc();
    game->sounds = init_sounds();
    game->items = init_items();
    game->item_dropped = 0;
    init_ball(game);
    load_config(game, window);
    if (!game->room || !game->player || !game->ball || !game->hud || !game->npc)
        return (NULL);
    game->framebuffer = framebuffer_create(1920, 1080);
    return (game);
}