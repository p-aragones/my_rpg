/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_player
*/

#include "game.h"

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));
    sfVector

    if (!player)
        return (NULL);
    player->elem = create_elem(PLAYER_TEXTURE, POS_PLAYER, RECT_PLAYER);
    sfSprite_setScale(player->elem->sprite, SCALE_PLAYER);
    if (!player->elem)
        return (NULL);
    player->dmg = 1;
    player->speed = 20;
    player->health = 3;
    player->hitbox = create_rectangle(player->elem->pos, sfGreen, );
    return (player);
}