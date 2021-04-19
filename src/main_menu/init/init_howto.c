/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_howto
*/

#include "main_menu.h"

howto_t *init_howto(void)
{
    howto_t *howto = malloc(sizeof(howto_t));

    if (howto == NULL)
        return (NULL);
    howto->howto = create_elem(HOWTO, POS_HOWTO, RECT_HOWTO);
    howto->howto_bg = create_elem(HOWTO_BG, POS_HOWTO_BG, RECT_HOWTO_BG);
    howto->status = 0;
    return (howto);
}