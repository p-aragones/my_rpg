/*
** EPITECH PROJECT, 2021
** my_draw_square.c
** File description:
** my_draw_square.c
*/
#include "game.h"

void my_draw_square(framebuffer_t *buffer,
                    sfVector2u position,
                    unsigned int size,
                    sfColor color)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        while (j < size) {
            my_put_pixel(buffer, position.x + i, position.y + j, color);
            j++;
        }
        j = 0;
        i++;
    }
}