/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_pause_menu.c
*/

#include "pause.h"
#include "struct_menu.h"

menu_t *init_pause_menu(void)
{
    menu_t *pause_menu = malloc(sizeof(menu_t));

    if (!pause_menu)
        return (NULL);
    pause_menu->buttons = init_pause_buttons();
    pause_menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    sfSprite_setScale(pause_menu->elem->sprite, SCALE_BG);
    pause_menu->howto = init_howto();
    sfSprite_setScale(pause_menu->elem->sprite, SCALE_BG);
    if (!pause_menu->buttons || !pause_menu->elem)
        return (NULL);
    return (pause_menu);
}
