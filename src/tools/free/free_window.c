/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** free_window
*/

#include "tools.h"

void free_fps(fps_t *fps)
{
    sfFont_destroy(fps->font);
    sfText_destroy(fps->text);
    free (fps);
}

void free_music(sfMusic *music)
{
    sfMusic_setLoop(music, sfFalse);
    sfMusic_destroy(music);
}

void free_window(window_t *window)
{
    free_fps(window->fps);
    free_music(window->music);
    sfRenderWindow_close(window->window);
    sfRenderWindow_destroy(window->window);
    free (window);
}