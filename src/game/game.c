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

    if (!game)
        return (84);
    srand(time(NULL));
    while (sfRenderWindow_isOpen(window->window)) {
        game_events(event, game, window);
        display_game(game, window->window);
    }
    return (0);
}