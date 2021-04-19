/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** struct
*/

#ifndef STRUCT_H
#define STRUCT_H

#include "csfml_lib.h"

typedef struct fps_s {
    int fps;
    sfFont *font;
    sfText *text;
} fps_t;


typedef struct clock_struct_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock_struct_t;

typedef struct elem_s {
    sfSprite *sprite;
    sfTexture* texture;
    sfVector2f pos;
    sfIntRect rect;
} elem_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfVideoMode videoMode;
    fps_t *fps;
    sfMusic *music;
} window_t;

#endif