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

    if (!window)
        return (84);
    return (main_menu(window));
}