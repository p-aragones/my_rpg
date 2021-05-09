/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_npc
*/

#include "game.h"

sfText *create_text(char *str)
{
    sfText *text = sfText_create();

    sfText_setString(text, str);
    sfText_setFont(text, sfFont_createFromFile(FONT));
    sfText_setPosition(text, POS_TEXT_NPC);
    sfText_setCharacterSize(text, FONT_SIZE_FPS);
    return (text);
}

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
    npc->text = create_text("It's dangerous to go alone, take this");
    npc->text_item = create_text("Good job!, Keep up the good work pal");
    return (npc);
}