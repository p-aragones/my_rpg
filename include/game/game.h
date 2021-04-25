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


game_t *init_game();
int game_events(sfEvent, game_t *, window_t *);
void display_game(game_t *, sfRenderWindow *);

#endif /* !GAME_H_ */