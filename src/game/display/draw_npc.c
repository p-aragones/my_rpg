/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_npc
*/

#include "game.h"

void draw_npc(player_t *p, npc_t *npc, sfRenderWindow *window, game_t *game)
{
    int room = game->current_room;
    int random_item = rand() % 4;

    sfRenderWindow_drawSprite(window, npc->elem->sprite, NULL);
    if (p->elem->pos.y < npc->elem->pos.y + 100 && room == 0) {
        frozen(window, npc->dropped);
        npc->dropped = 1;
        sfRenderWindow_drawText(window, npc->text, NULL);
    }
    if (p->elem->pos.y < npc->elem->pos.y + 100 && room % 5 == 0 &&
    room != 0) {
        sfRenderWindow_drawText(window, game->npc->text_item, NULL);
        if (game->item_dropped == 0) {
            sfSprite_setPosition(game->items[random_item]->sprite,
            POS_HEART_DROPPPED);
            sfRectangleShape_setPosition(game->items[random_item]->hitbox,
            POS_HEART_DROPPPED);
            game->item_dropped = 1;
        }
    }
    if (npc->dropped == 1 && room == 0)
        sfRenderWindow_drawSprite(window, npc->ball->sprite, NULL);
}