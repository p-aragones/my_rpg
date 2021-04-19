/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** fps.c
*/

#include "main_menu.h"

int fps_click(window_t *window, menu_t *menu, struct button_s *button)
{
    if (click(window, menu, button) == 84)
        return (84);
    if (window->fps->fps == 30) {
        window->fps->fps = 60;
        sfText_setString(window->fps->text, "60 FPS");
        sfRenderWindow_setFramerateLimit(window->window, 60);
    } else if (window->fps->fps == 60) {
        window->fps->fps = 90;
        sfText_setString(window->fps->text, "90 FPS");
        sfRenderWindow_setFramerateLimit(window->window, 90);
    } else {
        window->fps->fps = 30;
        sfText_setString(window->fps->text, "30 FPS");
        sfRenderWindow_setFramerateLimit(window->window, 30);
    }
    return (0);
}