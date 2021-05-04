/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_npc
*/

#include "game.h"

npc_t *init_npc(void)
{
    npc_t *npc = malloc(sizeof(npc_t) * 1);

    if (!npc)
        return (NULL);
    npc->elem = create_elem(NPC_TEXTURE, POS_NPC, RECT_NPC);
    npc->ball = create_elem(BALL_TEXTURE, POS_BALL_NPC, RECT_BALL);
    npc->dropped = 0;
    sfSprite_setScale(npc->ball->sprite, SCALE_BALL);
    sfSprite_setScale(npc->elem->sprite, SCALE_NPC);
    npc->text = sfText_create();
    sfText_setString(npc->text, "It's dangerous to go alone, take this");
    sfText_setFont(npc->text, sfFont_createFromFile(FONT));
    sfText_setPosition(npc->text, POS_TEXT_NPC);
    sfText_setCharacterSize(npc->text, FONT_SIZE_FPS);
    return (npc);
}