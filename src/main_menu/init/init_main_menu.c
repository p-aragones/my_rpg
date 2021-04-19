/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_main_menu
*/

#include "main_menu.h"

menu_t *init_main_menu(void)
{
    menu_t *menu = malloc(sizeof(menu_t));

    if (menu == NULL)
        return (NULL);
    menu->buttons = init_buttons();
    menu->elem = create_elem(MENU_BACKGROUND, POS_BG, RECT_BG);
    menu->howto = init_howto();
    sfSprite_setScale(menu->elem->sprite, SCALE_BG);
    if (!menu->buttons || !menu->elem || !menu->howto)
        return (NULL);
    return (menu);
}