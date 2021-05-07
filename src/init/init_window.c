/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_window
*/

#include "rpg.h"

sfMusic *init_music(void)
{
    sfMusic *music = sfMusic_createFromFile(MUSIC);
    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    if (!music)
        return (NULL);
    return (music);
}

window_t *init_window(char **av)
{
    window_t *window = malloc(sizeof(window_t));

    if (window == NULL)
        return (NULL);
    window->videoMode.bitsPerPixel = 32;
    window->videoMode.height = Y_WINDOW;
    window->videoMode.width = X_WINDOW;
    window->window = sfRenderWindow_create(window->videoMode,
    "my_defender", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 60);
    window->fps = init_fps();
    window->music = init_music();
    if (!window->window || !window->fps || !window->music)
        return (NULL);
    return (window);
}