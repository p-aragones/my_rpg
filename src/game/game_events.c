/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** analyse_events
*/

#include "game.h"

int check_moves(sfEvent event, game_t *game)
{
    game->player->elem->rect.left += 64;
    if (game->player->elem->rect.left == 576)
        game->player->elem->rect.left = 0;
    if (event.key.code == sfKeyUp) {
        move_player(game->player, UP);
        game->player->elem->rect.top = 512;
        return (0);
    }
    if (event.key.code == sfKeyDown) {
        move_player(game->player, DOWN);
        game->player->elem->rect.top = 640;
        return (0);
    }
    if (event.key.code == sfKeyLeft) {
        move_player(game->player, LEFT);
        game->player->elem->rect.top = 576;
        return (0);
    }
    if (event.key.code == sfKeyRight) {
        move_player(game->player, RIGHT);
        game->player->elem->rect.top = 704;
        return (0);
    }
    game->player->elem->rect.left = 0;
    return (0);
}

int cross_door(sfVector2f player, sfVector2f door)
{
    if ((player.x >= 1720 && player.x <= 1780) &&
    (player.y + 64 >= door.y && player.y + 64 <= door.y + 50))
        return (1);
    return (0);
}

int game_events(sfEvent event, game_t *game, window_t *window)
{
    if (game->room->n_enemies == 0)
        game->room->locked = 0;
    if (cross_door(game->player->elem->pos, game->room->door->pos) == 1 &&
    game->room->locked == 0)
        generate_room(game);
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.key.code == sfKeyEscape)
            sfRenderWindow_close(window->window);
        check_moves(event, game);
    }
}