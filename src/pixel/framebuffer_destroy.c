/*
** EPITECH PROJECT, 2021
** framebuffer_destroy.c
** File description:
** framebuffer_destroy.c
*/

#include "game.h"

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
    free(framebuffer);
}