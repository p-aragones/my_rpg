/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_game
*/

#include "game.h"
#include "tools.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));
    sfVector2u size = (sfVector2u) {0, 0};

    if (!game)
        return (NULL);
    game->room = init_room();
    game->player = init_player();
    game->ball = create_elem(BALL_TEXTURE, POS_BALL, RECT_BALL);
    sfSprite_setScale(game->ball->sprite, SCALE_BALL);
    size = (sfVector2u) {(game->ball->rect.width - game->ball->rect.left) *
    SCALE_BALL.x, (game->ball->rect.height - game->ball->rect.top) *
    SCALE_BALL.y};
    game->ball->hitbox = create_rectangle(POS_BALL, sfRed, size);
    game->ball_dir = 0;
    game->hud = init_hud();
    game->npc = init_npc();
    game->sounds = init_sounds();
    game->current_room = 0;
    game->max_room = 0;
    if (!game->room || !game->player || !game->ball || !game->hud || !game->npc)
        return (NULL);
    return (game);
}