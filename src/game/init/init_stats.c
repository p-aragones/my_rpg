/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_stats
*/

#include "game.h"

void set_scales(hud_t *hud)
{
    sfSprite_setScale(hud->dmg->sprite, SCALE_DMG);
    sfSprite_setScale(hud->speed->sprite, SCALE_SPEED);
    sfSprite_setScale(hud->dex->sprite, SCALE_DEX);
}

void init_stats(hud_t *hud)
{
    hud->dmg = create_elem(DMG_TEXTURE, POS_DMG, RECT_DMG);
    hud->speed = create_elem(SPEED_TEXTURE, POS_SPEED, RECT_SPEED);
    hud->dex = create_elem(DEX_TEXTURE, POS_DEX, RECT_DEX);
    hud->dmg_text = sfText_create();
    hud->speed_text = sfText_create();
    hud->dex_text = sfText_create();
    sfText_setCharacterSize(hud->dmg_text, FONT_SIZE_STATS);
    sfText_setCharacterSize(hud->speed_text, FONT_SIZE_STATS);
    sfText_setCharacterSize(hud->dex_text, FONT_SIZE_STATS);
    sfText_setFont(hud->dmg_text, sfFont_createFromFile(FONT));
    sfText_setFont(hud->speed_text, sfFont_createFromFile(FONT));
    sfText_setFont(hud->dex_text, sfFont_createFromFile(FONT));
    sfText_setPosition(hud->dmg_text, TEXT_POS_DMG);
    sfText_setPosition(hud->speed_text, TEXT_POS_SPEED);
    sfText_setPosition(hud->dex_text, TEXT_POS_DEX);
    set_scales(hud);
}