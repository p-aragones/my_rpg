/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** diff particles effects
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

void frozen(sfRenderWindow *window, int dropped)
{
    elem_t *frozen;
    int i = 0;
    sfTime time = sfMilliseconds(65);

    if (dropped)
        return;
    frozen = create_elem(FROZEN, FROZ_POS, FROZ_RECT);
    while (frozen->rect.top < 929) {
        sfRenderWindow_drawSprite(window, frozen->sprite, NULL);
        sfRenderWindow_display(window);
        sfSprite_setTextureRect(frozen->sprite, frozen->rect);
        frozen->rect.left += 191;
        if (frozen->rect.left > 953) {
            frozen->rect.left = 0;
            frozen->rect.top += 186;
        }
        sfSleep(time);
    }
    free_elem(frozen);
}