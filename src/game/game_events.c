/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** analyse_events
*/

#include "game.h"

int movers(sfEvent event, game_t *game)
{
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
    return (1);
}

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
    if (movers(event, game) == 1)
        game->player->elem->rect.left = 0;
    if (event.key.code == sfKeyA)
        return (1);
    if (event.key.code == sfKeyW)
        return (2);
    if (event.key.code == sfKeyS)
        return (3);
    if (event.key.code == sfKeyD)
        return (4);
    return (0);
}

int cross_door(sfVector2f player, sfVector2f door)
{
    if ((player.x >= 1720 && player.x <= 1780) &&
    (player.y + 64 >= door.y && player.y + 64 <= door.y + 50))
        return (1);
    return (0);
}

void exit_room(game_t *game, window_t *window)
{
    if (cross_door(game->player->elem->pos, game->room->door->pos) == 1 &&
    game->room->locked == 0 && game->current_room == game->max_room)
        generate_room(game, window->window);
    if (back_door(game, game->player->elem->pos,
    game->room->backdoor->pos) == 1)
        go_back(game);
}

int game_events(sfEvent event, game_t *game, window_t *window)
{
    int a = 0;

    if (game->room->n_enemies <= 0 && game->room->locked == 1)
        room_cleared(game);
    exit_room(game, window);
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.key.code == sfKeyEscape && pause_menu(window) == 1)
            return (1);
        if (event.type == sfEvtKeyReleased && event.key.code == sfKeyH)
            game->hud->hitboxes *= -1;
        a = check_moves(event, game);
    }
    if (game->hud->room->num != 0)
        ball_moves(event, game, a);
    if (game->room->enemies)
        follow_player(game->player, game->room->enemies);
}