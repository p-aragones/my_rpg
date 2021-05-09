/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** draw_hud
*/

#include "game.h"

void draw_hearts(hud_t *hud, int lives, sfRenderWindow *window)
{
    int i = 0;

    while (i < lives) {
        sfRenderWindow_drawSprite(window, hud->hearts[i]->sprite, NULL);
        i++;
    }
}

void draw_inv(hud_t *hud, sfRenderWindow *window)
{
    int i = 0;

    sfRenderWindow_drawSprite(window, hud->inv->inv->sprite, NULL);
    while (hud->inv->obj[i]) {
        sfRenderWindow_drawSprite(window, hud->inv->obj[i]->sprite, NULL);
        i++;
    }
}

void update_stats(game_t *game)
{
    sfText_setString(game->hud->dmg_text, my_its(game->player->dmg));
    sfText_setString(game->hud->speed_text, my_its(game->player->speed));
    sfText_setString(game->hud->dex_text, my_its(game->speed_ball));
}

void draw_stats(hud_t *hud, sfRenderWindow *window, game_t *game)
{
    update_stats(game);
    sfRenderWindow_drawSprite(window, hud->dmg->sprite, NULL);
    sfRenderWindow_drawSprite(window, hud->speed->sprite, NULL);
    sfRenderWindow_drawSprite(window, hud->dex->sprite, NULL);
    sfRenderWindow_drawText(window, game->hud->dmg_text, NULL);
    sfRenderWindow_drawText(window, game->hud->speed_text, NULL);
    sfRenderWindow_drawText(window, game->hud->dex_text, NULL);
}

void draw_hud(hud_t *hud, int lives, sfRenderWindow *window, game_t *game)
{
    draw_hearts(hud, lives, window);
    draw_inv(hud, window);
    draw_stats(hud, window, game);
    sfRenderWindow_drawText(window, hud->room->text, NULL);
}