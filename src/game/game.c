/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game
*/

#include "game.h"
#include <time.h>

int moving_player_two(int i, game_t *game)
{
    game->player->elem->rect.left += 64;
    if (game->player->elem->rect.left == 576)
        game->player->elem->rect.left = 0;
    if (game->player->up == 0 && game->player->down == 0 &&
        game->player->left == 0 && game->player->right == 0)
        game->player->elem->rect.left = 0;
    if (game->player->up == 1) {
        move_player(game->player, UP);
        game->player->elem->rect.top = 512;
    }
}

int moving_player(int i, game_t *game)
{
    if (i == 70000) {
        moving_player_two(i, game);
        if (game->player->down == 1) {
            move_player(game->player, DOWN);
            game->player->elem->rect.top = 640;
        }
        if (game->player->left == 1) {
            move_player(game->player, LEFT);
            game->player->elem->rect.top = 576;
        }
        if (game->player->right == 1) {
            move_player(game->player, RIGHT);
            game->player->elem->rect.top = 704;
        }
    }
    if (i++ == 70001)
        i = 0;
    return (i);
}

int game(window_t *window)
{
    sfEvent event;
    clock_struct_t *clock = init_clock();
    game_t *game = init_game(window);
    int in_game = 0;
    int i = 0;

    if (!game || !clock)
        return (84);
    srand(time(NULL));
    dezoom(window->window, game->room->elem->sprite);
    while (!in_game && sfRenderWindow_isOpen(window->window)) {
        i = moving_player(i, game);
        if (sfClock_getElapsedTime(clock->clock).microseconds > TIME_LIMIT) {
            if (game_events(event, game, window))
                return (1);
            display_game(game, window->window);
            sfClock_restart(clock->clock);
        }
    }
    return (0);
}