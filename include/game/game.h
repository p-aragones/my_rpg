/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#include "rpg.h"
#include "game_struct.h"
#include "macro_game.h"

// PLAYER
void move_player(player_t *, int, int);
int ball_moves(sfEvent, game_t *, int);

// ENEMIES
game_t *generate_enemies(game_t *);
enemy_t *create_bat(int , int);
enemy_t *create_dip(int , int);
enemy_t *create_ghost(int , int);
enemy_t *create_head(int , int);
enemy_t *create_spike(int , int);
sfRectangleShape *create_rectangle(sfVector2f, sfColor, sfVector2u);
sfVector2f random_pos(void);
void follow_player(player_t *, enemy_t **);

// ROOM
int generate_room(game_t *);

// INIT
player_t *init_player(void);
room_t *init_room(void);
hud_t *init_hud(void);
game_t *init_game(void);
npc_t *init_npc(void);

// DISPLAY
void draw_hud(hud_t *, int , sfRenderWindow *);
void draw_npc(player_t *, npc_t *, sfRenderWindow *);
void display_game(game_t *, sfRenderWindow *);

int game_events(sfEvent, game_t *, window_t *);

#endif /* !GAME_H_ */