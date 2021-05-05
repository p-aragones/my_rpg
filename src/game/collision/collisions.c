/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** collisions
*/

#include "game.h"

bool check_colision_rectangle(sfRectangleShape *r1, sfRectangleShape *r2)
{
    sfVector2f r1_pos = sfRectangleShape_getPosition(r1);
    sfVector2f r2_pos = sfRectangleShape_getPosition(r2);
    sfVector2f r1_size = sfRectangleShape_getSize(r1);
    sfVector2f r2_size = sfRectangleShape_getSize(r2);
    bool collision_x = r1_pos.x + r1_size.x >= r2_pos.x &&
    r2_pos.x + r2_size.x >= r1_pos.x;
    bool collision_y = r1_pos.y + r1_size.y >= r2_pos.y &&
    r2_pos.y + r2_size.y >= r1_pos.y;

    return (collision_x && collision_y);
}

void check_colision_to_player(game_t *game)
{
    sfRectangleShape *player = game->player->hitbox;
    sfTime time_clock = sfClock_getElapsedTime(game->player->health_time);
    float time = sfTime_asSeconds(time_clock);

    if (!game->room->enemies)
        return;
    for (int i = 0; time > 3 && game->room->enemies[i]; i++) {
        if (check_colision_rectangle(player, game->room->enemies[i]->hitbox)) {
            game->player->health--;
            sfClock_restart(game->player->health_time);
        }
        time = sfTime_asSeconds(time_clock);
    }
}