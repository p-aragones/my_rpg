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
void take_heart(game_t *);
void apply_stats(game_t *, int);
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
void follow_player(player_t *, enemy_t **, game_t *);

// ROOM
void free_room(room_t *);
void room_cleared(game_t *, sfRenderWindow *);
void empty_room(game_t *);
int back_door(game_t *, sfVector2f, sfVector2f);
void go_back(game_t *);
int generate_room(game_t *, sfRenderWindow *);

// HITBOXES
void check_colision_to_player(game_t *);
bool check_colision_rectangle(sfRectangleShape *, sfRectangleShape *);
void check_colision_ball_enemies(game_t *);
void check_colision_player_npc(game_t *);

// INIT
player_t *init_player(window_t *);
room_t *init_room(void);
void init_stats(hud_t *);
hud_t *init_hud(void);
game_t *init_game(window_t *);
npc_t *init_npc(void);
elem_t **init_items(void);
sounds_t *init_sounds(void);

// DISPLAY
void reset_item_pos(elem_t **);
void draw_items(elem_t **, sfRenderWindow *, int);
void draw_hud(hud_t *, int , sfRenderWindow *, game_t *);
void draw_npc(player_t *, npc_t *, sfRenderWindow *, game_t *);
void display_game(game_t *, sfRenderWindow *);

int game_events(sfEvent, game_t *, window_t *);

void dust_effect(sfRenderWindow *window, game_t *game);
void frozen(sfRenderWindow *window, int);
void movers_two(sfEvent event, game_t *game);

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