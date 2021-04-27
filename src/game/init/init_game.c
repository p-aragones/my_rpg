/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_game
*/

#include "game.h"
#include "tools.h"

room_t *init_room(void)
{
    room_t *room = malloc(sizeof(room_t));

    if (!room)
        return (NULL);
    room->n_enemies = 0;
    room->locked = 1;
    room->enemies = NULL;
    room->elem = create_elem(ROOM_BG, POS_BG, RECT_BG);
    room->door = create_elem(DOOR_TEXTURE, POS_DOOR, RECT_DOOR);
    room->backdoor = create_elem(DOOR_TEXTURE, POS_BDOOR, RECT_DOOR);
    if (!room->elem || !room->door || !room->backdoor)
        return (NULL);
    sfSprite_setScale(room->door->sprite, SCALE_DOOR);
    sfSprite_setScale(room->backdoor->sprite, SCALE_DOOR);
    sfSprite_setRotation(room->door->sprite, 90);
    sfSprite_setRotation(room->backdoor->sprite, 270);
    sfSprite_setScale(room->elem->sprite, SCALE_BG);
    return (room);
}

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));

    if (!player)
        return (NULL);
    player->elem = create_elem(PLAYER_TEXTURE, POS_PLAYER, RECT_PLAYER);
    sfSprite_setScale(player->elem->sprite, SCALE_PLAYER);
    if (!player->elem)
        return (NULL);
    player->dmg = 1;
    player->speed = 20;
    player->health = 3;
    return (player);
}

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));

    if (!game)
        return (NULL);
    game->room = init_room();
    game->player = init_player();
    game->ball = create_elem(BALL_TEXTURE, POS_BALL, RECT_BALL);
    sfSprite_setScale(game->ball->sprite, SCALE_BALL);
    return (game);
}