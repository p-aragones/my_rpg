/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_npc
*/

#include "game.h"

void draw_npc(player_t *p, npc_t *npc, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, npc->elem->sprite, NULL);
    if (p->elem->pos.y < npc->elem->pos.y + 100) {
        sfRenderWindow_drawText(window, npc->text, NULL);
        sfRenderWindow_drawSprite(window, npc->ball->sprite, NULL);
    }
}