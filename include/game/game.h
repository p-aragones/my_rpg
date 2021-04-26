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

// ENEMIES
game_t *generate_enemies(game_t *);
enemy_t *create_bat(int , int);
enemy_t *create_dip(int , int);
enemy_t *create_ghost(int , int);
enemy_t *create_head(int , int);
enemy_t *create_spike(int , int);

// ROOM
int generate_room(game_t *);

game_t *init_game();
int game_events(sfEvent, game_t *, window_t *);
void display_game(game_t *, sfRenderWindow *);

#endif /* !GAME_H_ */