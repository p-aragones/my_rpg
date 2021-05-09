/*
** EPITECH PROJECT, 2021
** my_put_pixel.c
** File description:
** my_put_pixel.c
*/

#include "game.h"

void my_put_pixel(framebuffer_t *frbuff,
                    unsigned int x,
                    unsigned int y,
                    sfColor color)
{
    if (!(x < 0 || y < 0 || x > frbuff->width || y > frbuff->height)) {
        frbuff->pixels[(frbuff->width * y + x) * 4 + 0] = color.r;
        frbuff->pixels[(frbuff->width * y + x) * 4 + 1] = color.g;
        frbuff->pixels[(frbuff->width * y + x) * 4 + 2] = color.b;
        frbuff->pixels[(frbuff->width * y + x) * 4 + 3] = color.a;
    }
}