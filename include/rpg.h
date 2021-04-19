/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** rpg.h
*/

#ifndef RPG_H_
#define RPG_H_

#include "csfml_lib.h"
#include "struct.h"
#include "macros.h"
#include "tools.h"

int main_menu(window_t *);
int rpg(void);
window_t *init_window(void);
fps_t *init_fps(void);
elem_t *create_elem(char *path, sfVector2f pos, sfIntRect rect);

clock_struct_t *init_clock(void);

#endif