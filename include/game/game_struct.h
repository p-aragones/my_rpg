/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game_struct
*/

#ifndef GAME_STRUCT_H_
#define GAME_STRUCT_H_

#include "struct.h"

typedef struct enemy_t {
    elem_t *elem;
    int health;
    int dmg;
    int speed;
} enemy_t;

typedef struct player_s {
    elem_t *elem;
    int health;
    float dmg;
    float speed;
} player_t;

typedef struct room_s {
    elem_t *elem;
    elem_t *door;
    elem_t *backdoor;
    enemy_t **enemies;
    int n_enemies;
    int locked;
} room_t;

typedef struct hud_s {
    elem_t **hearts;
    text_t *room;
} hud_t;

typedef struct game_s {
    room_t *room;
    player_t *player;
    elem_t *ball;
    hud_t *hud;
} game_t;

#endif /* !GAME_STRUCT_H_ */