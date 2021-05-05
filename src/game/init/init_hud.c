/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_hud
*/

#include "game.h"

elem_t **init_hearts(void)
{
    elem_t **hearts = malloc(sizeof(elem_t *) * (10 + 1));
    int i = 0;

    while (i < 10) {
        hearts[i] = create_elem(HEART_TEXTURE, POS_HEART, RECT_HEART);
        sfSprite_setScale(hearts[i]->sprite, SCALE_HEART);
        hearts[i]->pos.x += i * 37;
        sfSprite_setPosition(hearts[i]->sprite, hearts[i]->pos);
        if (!hearts[i])
            return (NULL);
        i++;
    }
    hearts[i] = NULL;
    return (hearts);
}

text_t *init_score(void)
{
    text_t *score = malloc(sizeof(text_t));

    if (!score)
        return (NULL);
    score->font = sfFont_createFromFile(FONT);
    score->num = 0;
    score->pos = SCORE_POS;
    score->text = sfText_create();
    sfText_setString(score->text, my_its(score->num));
    sfText_setFont(score->text, score->font);
    sfText_setPosition(score->text, score->pos);
    sfText_setCharacterSize(score->text, SCORE_SIZE);
    return (score);
}

elem_t **init_obj(void)
{
    elem_t **obj = malloc(sizeof(elem_t *) * NUM_OBJ);
    int i = 0;

    if (!obj)
        return (NULL);
    obj[0] = create_elem(ARROW_TEXTURE, START_OBJ, OBJ_RECT);
    obj[1] = create_elem(CROSS_TEXTURE, START_OBJ, OBJ_RECT);
    obj[2] = create_elem(SNACK_TEXTURE, START_OBJ, OBJ_RECT);
    obj[3] = create_elem(WHIP_TEXTURE, START_OBJ, OBJ_RECT);
    obj[4] = NULL;

    for (i = 0; i < 4; i++)
        if (!obj[i])
            return (NULL);
    return (obj);
}

inventory_t *init_inv(void)
{
    inventory_t *inv = malloc(sizeof(inventory_t));

    if (!inv)
        return (NULL);
    inv->inv = create_elem(INV_TEXTURE, INV_POS, INV_RECT);
    inv->obj = init_obj();
    if (!inv->inv || !inv->obj)
        return (NULL);
    sfSprite_setScale(inv->inv->sprite, INV_SCALE);
    return (inv);
}

hud_t *init_hud(void)
{
    hud_t *hud = malloc(sizeof(hud_t));

    if (!hud)
        return (NULL);
    hud->hearts = init_hearts();
    hud->room = init_score();
    hud->inv = init_inv();
    hud->hitboxes = -1;
    if (!hud->hearts || !hud->room || !hud->inv)
        return (NULL);
    return (hud);
}