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

    if (!game)
        return (NULL);
    game->room = init_room();
    game->player = init_player();
    game->ball = create_elem(BALL_TEXTURE, POS_BALL, RECT_BALL);
    game->ball_dir = 0;
    game->hud = init_hud();
    game->npc = init_npc();
    if (!game->room || !game->player || !game->ball ||
    !game->hud || !game->npc)
        return (NULL);
    sfSprite_setScale(game->ball->sprite, SCALE_BALL);
    return (game);
}