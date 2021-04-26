/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** enemies
*/

#include "game.h"

enemy_t *create_bat(int health, int speed)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    if (!enemy)
        return (NULL);
    enemy->elem = create_elem(BAT_TEXTURE, POS_BAT, RECT_BAT);
    if (!enemy->elem)
        return (NULL);
    sfSprite_setScale(enemy->elem->sprite, SCALE_BAT);
    enemy->health = health;
    enemy->speed = speed;
    enemy->dmg = 1;
    return (enemy);
}

enemy_t *create_dip(int health, int speed)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    if (!enemy)
        return (NULL);
    enemy->elem = create_elem(DIP_TEXTURE, POS_DIP, RECT_DIP);
    if (!enemy->elem)
        return (NULL);
    sfSprite_setScale(enemy->elem->sprite, SCALE_DIP);
    enemy->health = health;
    enemy->speed = speed;
    enemy->dmg = 1;
    return (enemy);
}

enemy_t *create_ghost(int health, int speed)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    if (!enemy)
        return (NULL);
    enemy->elem = create_elem(GHOST_TEXTURE, POS_GHOST, RECT_GHOST);
    if (!enemy->elem)
        return (NULL);
    sfSprite_setScale(enemy->elem->sprite, SCALE_GHOST);
    enemy->health = health;
    enemy->speed = speed;
    enemy->dmg = 1;
    return (enemy);
}

enemy_t *create_head(int health, int speed)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    if (!enemy)
        return (NULL);
    enemy->elem = create_elem(HEAD_TEXTURE, POS_HEAD, RECT_HEAD);
    if (!enemy->elem)
        return (NULL);
    sfSprite_setScale(enemy->elem->sprite, SCALE_HEAD);
    enemy->health = health;
    enemy->speed = speed;
    enemy->dmg = 1;
    return (enemy);
}

enemy_t *create_spike(int health, int speed)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));

    if (!enemy)
        return (NULL);
    enemy->elem = create_elem(SPIKE_TEXTURE, POS_SPIKE, RECT_SPIKE);
    if (!enemy->elem)
        return (NULL);
    sfSprite_setScale(enemy->elem->sprite, SCALE_SPIKE);
    enemy->health = health;
    enemy->speed = speed;
    enemy->dmg = 1;
    return (enemy);
}