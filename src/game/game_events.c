/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** analyse_events
*/

#include "game.h"

void check_moves(sfEvent event, game_t *game)
{
    if (event.key.code == sfKeyUp)
        move_player(game->player, UP);
    if (event.key.code == sfKeyDown)
        move_player(game->player, DOWN);
    if (event.key.code == sfKeyLeft)
        move_player(game->player, LEFT);
    if (event.key.code == sfKeyRight)
        move_player(game->player, RIGHT);
}

int game_events(sfEvent event, game_t *game, window_t *window)
{
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->window);
        check_moves(event, game);
    }
}