/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_player
*/

#include "game.h"

void init_player_hitbox(player_t *player)
{
    sfVector2u size = (sfVector2u) {0, 0};
    sfVector2f pos_hit = (sfVector2f) {0, 0};

    size = (sfVector2u) {70, 100};
    pos_hit.x = player->elem->pos.x + 30;
    pos_hit.y = player->elem->pos.y + 30;
    player->hitbox = create_rectangle(pos_hit, sfGreen, size);
}

void init_player_health(player_t *player, window_t *window)
{
    if (window->config->health > 0 && window->config->health < 11)
        player->health = window->config->health;
    else
        player->health = 3;
}

player_t *init_player(window_t *window)
{
    player_t *player = malloc(sizeof(player_t));
    sfVector2f scale = SCALE_PLAYER;

    if (!player)
        return (NULL);
    if (window->config->gender == 1)
        player->elem = create_elem(PLAYER_TEXTURE, POS_PLAYER, RECT_PLAYER);
    else
        player->elem = create_elem(GIRL_TEXTURE, POS_PLAYER, RECT_PLAYER);
    sfSprite_setScale(player->elem->sprite, SCALE_PLAYER);
    if (!player->elem)
        return (NULL);
    player->dmg = 1;
    player->speed = 20;
    init_player_health(player, window);
    init_player_hitbox(player);
    player->health_time = sfClock_create();
    return (player);
}