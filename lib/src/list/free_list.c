/*
** EPITECH PROJECT, 2020
** B-CPE-110-BAR-1-1-antman-javier.sanchez-castro
** File description:
** free_list.c
*/

#include "lib.h"
#include <stdlib.h>

void free_list(control_t *control)
{
    while (control->first->next) {
        control->first = control->first->next;
        free(control->first->prev->tower);
        free(control->first->prev);
    }
    free(control->first->tower);
    free(control->first);
    free(control);
}