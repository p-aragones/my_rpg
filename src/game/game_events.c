/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** analyse_events
*/

#include "game.h"

void movers(sfEvent event, game_t *game)
{
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyUp)
        game->player->up = 1;
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyDown)
        game->player->down = 1;
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyLeft)
        game->player->left = 1;
    if (event.type == sfEvtKeyPressed && event.key.code == sfKeyRight)
        game->player->right = 1;
    movers_two(event, game);
}

int check_moves(sfEvent event, game_t *game)
{
    movers(event, game);
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
    game->room->locked == 0 && game->current_room == game->max_room) {
        game->framebuffer = framebuffer_create(1920, 1080);
        generate_room(game, window->window);
    }
    if (cross_door(game->player->elem->pos, game->room->door->pos) == 1 &&
    game->room->locked == 0 && game->current_room < game->max_room)
        empty_room(game, window);
    if (back_door(game, game->player->elem->pos,
    game->room->backdoor->pos) == 1)
        go_back(game, window);
}

int game_events(sfEvent event, game_t *game, window_t *window)
{
    int a = 0;

    game->hud->room->num = game->current_room;
    if (game->room->n_enemies <= 0 && game->room->locked == 1)
        room_cleared(game, window->window);
    exit_room(game, window);
    while (sfRenderWindow_pollEvent(window->window, &event)) {
        if (event.key.code == sfKeyEscape && pause_menu(window) == 1)
            return (1);
        if (event.type == sfEvtKeyReleased && event.key.code == sfKeyH)
            game->hud->hitboxes *= -1;
        a = check_moves(event, game);
    }
    if (game->can_shoot == 1)
        ball_moves(event, game, a);
    if (game->room->enemies)
        follow_player(game->player, game->room->enemies, game);
    check_colision_player_npc(game);
    return (0);
}