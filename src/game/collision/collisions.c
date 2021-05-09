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
        if (check_colision_rectangle(player, game->room->enemies[i]->hitbox)
        && game->room->enemies[i]->health > 0) {
            game->player->health--;
            sfSound_play(game->sounds->oof);
            sfClock_restart(game->player->health_time);
            break;
        }
        time = sfTime_asSeconds(time_clock);
    }
}

void check_colision_ball_enemies(game_t *game)
{
    sfRectangleShape *ball = game->ball->hitbox;
    sfTime time_clock;
    float time = 0;

    if (!game->room->enemies)
        return;
    for (int i = 0; game->room->enemies[i]; i++) {
        time_clock = sfClock_getElapsedTime(game->room->enemies[i]->clock);
        time = sfTime_asSeconds(time_clock);
        if (check_colision_rectangle(ball, game->room->enemies[i]->hitbox)
        && time > 1) {
            game->room->enemies[i]->health -= game->player->dmg;
            if (game->room->enemies[i]->health <= 0)
                game->room->n_enemies--;
            sfClock_restart(game->room->enemies[i]->clock);
        }
    }
}

int get_x_pos(int i)
{
    return (1528 + (i * 80));
}

void check_colision_player_npc(game_t *game)
{
    sfRectangleShape *player = game->player->hitbox;
    int item = -1;

    for (int i = 0; game->items[i]; i++) {
        if (check_colision_rectangle(player, game->items[i]->hitbox)) {
            sfSprite_setPosition(game->items[i]->sprite, (sfVector2f)
            {get_x_pos(i), 985});
            sfRectangleShape_setPosition(game->items[i]->hitbox, (sfVector2f)
            {get_x_pos(i), 985});
            item = i;
            break;
        }
    }
    apply_stats(game, item);
}