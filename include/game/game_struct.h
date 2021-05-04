/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game_struct
*/

#ifndef GAME_STRUCT_H_
#define GAME_STRUCT_H_

#include "struct.h"

typedef struct inventory_s {
    elem_t *inv;
    elem_t **obj;
} inventory_t;

typedef struct enemy_s {
    elem_t *elem;
    int health;
    int dmg;
    int speed;
    sfRectangleShape *hitbox;
} enemy_t;

typedef struct player_s {
    elem_t *elem;
    int health;
    float dmg;
    float speed;
    sfRectangleShape *hitbox;
} player_t;

typedef struct room_s {
    elem_t *elem;
    elem_t *door;
    elem_t *heart;
    elem_t *backdoor;
    enemy_t **enemies;
    int n_enemies;
    int locked;
} room_t;

typedef struct hud_s {
    elem_t **hearts;
    text_t *room;
    inventory_t *inv;
} hud_t;

typedef struct npc_s {
    elem_t *elem;
    elem_t *ball;
    sfText *text;
    int dropped;
} npc_t;

typedef struct game_s {
    room_t *room;
    player_t *player;
    npc_t *npc;
    elem_t *ball;
    int ball_dir;
    hud_t *hud;
} game_t;

#endif /* !GAME_STRUCT_H_ */