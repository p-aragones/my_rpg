/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** mouse_hover
*/

#include "tools.h"

int mouse_hover(sfRenderWindow *window, sfVector2f pos)
{
    int mouse_x = get_x_mouse(window);
    int mouse_y = get_y_mouse(window);
    sfVector2i size = SIZE_PLAY;
    sfVector2f scale = SCALE_BTN;

    size.x = size.x * scale.x;
    size.y = size.y * scale.y;
    if (mouse_x >= pos.x && mouse_x <=
    pos.x + size.x && mouse_y >= pos.y
    && mouse_y <= pos.y + size.y)
        return (1);
    return (0);
}