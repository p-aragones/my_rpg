/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** free_main_menu
*/

#include "tools.h"
#include "main_menu.h"

void free_main_menu(menu_t *menu)
{
    free_elem(menu->howto->howto);
    free_elem(menu->howto->howto_bg);
    free (menu->howto);
    free_elem(menu->elem);
    free_buttons(menu->buttons);
}