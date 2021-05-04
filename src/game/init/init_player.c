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
    sfVector2u size = (sfVector2u) {0, 0};
    sfVector2f scale = SCALE_PLAYER;
    sfVector2f pos_hit = (sfVector2f) {0, 0};

    if (!player)
        return (NULL);
    player->elem = create_elem(PLAYER_TEXTURE, POS_PLAYER, RECT_PLAYER);
    sfSprite_setScale(player->elem->sprite, SCALE_PLAYER);
    if (!player->elem)
        return (NULL);
    player->dmg = 1;
    player->speed = 20;
    player->health = 3;
    size = (sfVector2u) {70, 100};
    pos_hit.x = player->elem->pos.x + 30;
    pos_hit.y = player->elem->pos.y + 30;
    player->hitbox = create_rectangle(pos_hit, sfGreen, size);
    return (player);
}