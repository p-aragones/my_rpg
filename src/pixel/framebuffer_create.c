/*
** EPITECH PROJECT, 2021
** framebuffer_create.c
** File description:
** framebuffer_create.c
*/

#include "game.h"
#include <stdlib.h>

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    int size = width * height * 4;
    int i = 0;

    if (framebuffer == NULL)
        return (NULL);
    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(sizeof(sfUint8) * size);
    if (framebuffer->pixels == NULL)
        return (NULL);
    while (i < size) {
        framebuffer->pixels[i] = 0;
        i++;
    }
    return (framebuffer);
}