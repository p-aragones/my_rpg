/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** waiting.c
*/

#include "main_menu.h"

int waiting_button(void)
{
    clock_struct_t *clock = init_clock();

    if (!clock)
        return (84);
    clock->time = sfClock_getElapsedTime(clock->clock);
    clock->seconds = clock->time.microseconds;
    while (clock->seconds < 100000) {
        clock->time = sfClock_getElapsedTime(clock->clock);
        clock->seconds = clock->time.microseconds;
    }
    return (0);
}