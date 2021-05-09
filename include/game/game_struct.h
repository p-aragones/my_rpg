/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game_struct
*/

#ifndef GAME_STRUCT_H_
#define GAME_STRUCT_H_

#include <stdbool.h>
#include "struct.h"

typedef struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfTexture *texture;
    sfSprite *sprite;
    sfUint8 *pixels;
    sfClock *clock;
} framebuffer_t;

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
    sfClock *clock;
} enemy_t;

typedef struct player_s {
    elem_t *elem;
    int health;
    float dmg;
    float speed;
    int right;
    int left;
    int down;
    int up;
    sfRectangleShape *hitbox;
    sfClock *health_time;
} player_t;

typedef struct room_s {
    elem_t *elem;
    elem_t *door;
    elem_t *heart;
    elem_t *backdoor;
    enemy_t **enemies;
    int h_dropped;
    int n_enemies;
    int locked;
} room_t;

typedef struct hud_s {
    elem_t **hearts;
    text_t *room;
    inventory_t *inv;
    elem_t *dmg;
    elem_t *speed;
    elem_t *dex;
    sfText *dmg_text;
    sfText *dex_text;
    sfText *speed_text;
    int hitboxes;
} hud_t;

typedef struct npc_s {
    elem_t *elem;
    elem_t *ball;
    sfText *text;
    sfText *text_item;
    int dropped;
} npc_t;

typedef struct sounds_s {
    sfSound *oof;
    sfSound *shoot;
    sfSound *door;
} sounds_t;

typedef struct game_s {
    room_t *room;
    player_t *player;
    npc_t *npc;
    elem_t *ball;
    hud_t *hud;
    sounds_t *sounds;
    elem_t **items;
    framebuffer_t *framebuffer;
    int item_dropped;
    int ball_dir;
    int speed_ball;
    int current_room;
    int max_room;
} game_t;

#endif /* !GAME_STRUCT_H_ */