/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#include <math.h>

#include "rpg.h"
#include "game_struct.h"
#include "macro_game.h"
#include "pause.h"

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

// HITBOXES
void check_colision_to_player(game_t *);
bool check_colision_rectangle(sfRectangleShape *, sfRectangleShape *);

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

void dust_effect(sfRenderWindow *window, game_t *game);
void frozen(sfRenderWindow *window, int);

// PIXEL
void my_put_pixel(framebuffer_t *frbuff,
                    unsigned int x,
                    unsigned int y,
                    sfColor color);
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
int my_draw_circle(framebuffer_t *framebuffer,
                    sfVector2i center,
                    int radius,
                    sfColor color);
void my_draw_square(framebuffer_t *buffer,
                    sfVector2u position,
                    unsigned int size,
                    sfColor color);

#endif /* !GAME_H_ */