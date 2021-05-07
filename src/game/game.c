/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game
*/

#include "game.h"
#include <time.h>

int game(window_t *window)
{
    sfEvent event;
    game_t *game = init_game();
    int in_game = 0;

    if (!game)
        return (84);
    srand(time(NULL));
    dezoom(window->window, game->room->elem->sprite);
    while (!in_game && sfRenderWindow_isOpen(window->window)) {
        game->hud->room->num = game->current_room;
        in_game = game_events(event, game, window);
        if (in_game)
            return (in_game);
        display_game(game, window->window);
    }
    return (0);
}