/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** pause.h
*/

#ifndef PAUSE_H
#define PAUSE_H

#include "rpg.h"
#include "tools.h"
#include "maccro_pause.h"

int pause_menu(window_t *window);
int resume(window_t *window, menu_t *menu, button_t *button);
int launch_menu(window_t *window, menu_t *menu, button_t *button);
menu_t *init_pause_menu(void);
button_t **init_pause_buttons(void);

button_t *init_button_func(button_t *button, FUNC_CLICK);
button_t *init_button_elem(char *path, sfVector2f pos,
sfIntRect rect, sfVector2i size);
button_t *init_button_texture(button_t * button, char *hover, char *click);

void display_pause(window_t *window, menu_t *menu);

howto_t *init_howto(void);

#endif