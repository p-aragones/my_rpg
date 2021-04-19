/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_buttons.c
*/

#include "main_menu.h"

button_t *init_button_fonc(button_t *button, FONC_CLICK)
{
    button->hover_fonc = &hover;
    button->click_fonc = click_fonc;
    return (button);
}

button_t *init_button_elem(char *path, sfVector2f pos,
sfIntRect rect, sfVector2i size)
{
    button_t *button = malloc(sizeof(button_t));

    if (!button)
        return (NULL);
    button->status = NONE;
    button->elem = create_elem(path, pos, rect);
    if (rect.height == 109)
        sfSprite_setScale(button->elem->sprite, SCALE_SMALL_BTN);
    else
        sfSprite_setScale(button->elem->sprite, SCALE_BTN);
    button->size = size;
    if (!button->elem)
        return (NULL);
    return (button);
}

button_t *init_button_texture(button_t * button, char *hover, char *click)
{
    button->hover_texture = sfTexture_createFromFile(hover, NULL);
    button->click_texture = sfTexture_createFromFile(click, NULL);
    if (!button->hover_texture || !button->click_texture)
        return (NULL);
    return (button);
}

int check_button(button_t **buttons, int size)
{
    int x = 0;

    while (x != size) {
        if (!buttons[x])
            return (84);
        x++;
    }
    return (0);
}

button_t **init_buttons(void)
{
    button_t **buttons = malloc(sizeof(button_t *) * N_BUTTONS);

    if (!buttons)
        return (NULL);
    buttons[0] = init_button_elem(PLAY_INFO);
    buttons[0] = init_button_fonc(buttons[0], PLAY_FONC_C);
    buttons[0] = init_button_texture(buttons[0], PLAY_TEXTURE);
    buttons[1] = init_button_elem(EXIT_INFO);
    buttons[1] = init_button_fonc(buttons[1], EXIT_FONC_C);
    buttons[1] = init_button_texture(buttons[1], EXIT_TEXTURE);
    buttons[2] = init_button_elem(SOUND_INFO);
    buttons[2] = init_button_fonc(buttons[2], SOUND_FONC_C);
    buttons[2] = init_button_texture(buttons[2], SOUND_TEXTURE);
    buttons[3] = init_button_elem(FPS_INFO);
    buttons[3] = init_button_fonc(buttons[3], FPS_FONC_C);
    buttons[3] = init_button_texture(buttons[3], FPS_TEXTURE);
    buttons[4] = NULL;
    if (check_button(buttons, 4) == 84)
        return (NULL);
    return (buttons);
}