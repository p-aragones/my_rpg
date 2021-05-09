/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_room
*/

#include "game.h"

void set_room_scale(room_t *room)
{
    sfSprite_setScale(room->heart->sprite, SCALE_HEART);
    sfSprite_setScale(room->door->sprite, SCALE_DOOR);
    sfSprite_setScale(room->backdoor->sprite, SCALE_DOOR);
    sfSprite_setRotation(room->door->sprite, 90);
    sfSprite_setRotation(room->backdoor->sprite, 270);
    sfSprite_setScale(room->elem->sprite, SCALE_BG_START);
}

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
    room->heart = create_elem(HEART_TEXTURE, START_OBJ, RECT_HEART);
    room->h_dropped = 0;
    if (!room->elem || !room->door || !room->backdoor || !room->heart)
        return (NULL);
    set_room_scale(room);
    return (room);
}