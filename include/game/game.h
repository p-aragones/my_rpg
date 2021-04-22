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

game_t *init_game();
void display_game(game_t *, sfRenderWindow *);

#endif /* !GAME_H_ */