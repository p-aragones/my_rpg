/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** rpg
*/

#include "rpg.h"

int rpg(char **av)
{
    window_t *window = init_window(av);
    config_t *config = init_config(av);

    if (!window || !config)
        return (84);
    printf("file: %s\n", config->file);
    printf("name: %s\n", config->name);
    printf("lifes: %d\n", config->health);
    printf("gender: %d\n", config->gender);
    printf("level: %d\n", config->level);
    printf("room: %d\n", config->room);
    exit (0);
    return (main_menu(window));
}