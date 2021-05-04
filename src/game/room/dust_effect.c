/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** dust effect when enter the room
*/

#include "rpg.h"
#include "game.h"

void dust_effect(sfRenderWindow *window, game_t *game)
{
    elem_t *dust = create_elem(DUST, DUST_POS, DUST_RECT);
    int i = 0;
    sfTime time = sfMilliseconds(100);

    while (i != 8) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, game->room->elem->sprite, NULL);
        sfRenderWindow_drawSprite(window, dust->sprite, NULL);
        sfRenderWindow_display(window);
        dust->rect.left += 174;
        if (dust->rect.left > 174) {
            dust->rect.top += 174;
            if (dust->rect.top > 174)
                dust->rect.top = 0;
            dust->rect.left = 0;
        }
        sfSprite_setTextureRect(dust->sprite, dust->rect);
        i++;
        sfSleep(time);
    }
}