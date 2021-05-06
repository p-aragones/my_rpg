/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_pause_button.c
*/

#include "pause.h"
#include "struct_menu.h"
#include "main_menu.h"

button_t **init_second_part(button_t **buttons)
{
    buttons[3] = init_button_elem(FPS_INFO);
    buttons[3] = init_button_func(buttons[3], FPS_FUNC_C);
    buttons[3] = init_button_texture(buttons[3], FPS_TEXTURE);
    buttons[4] = init_button_elem(RESUME_INFO);
    buttons[4] = init_button_func(buttons[4], RESUME_FUNCTION);
    buttons[4] = init_button_texture(buttons[4], RESUME_TEXTURE);
    buttons[5] = NULL;
    if (check_button(buttons, 5) == 84)
        return (NULL);
    return (buttons);
}

button_t **init_pause_buttons(void)
{
    button_t **buttons = malloc(sizeof(button_t *) * N_BUTTONS_PAUSE);

    if (!buttons)
        return (NULL);
    buttons[0] = init_button_elem(MENU_INFO);
    init_button_func(buttons[0], MENU_FUNCTION);
    init_button_texture(buttons[0], MENU_TEXTURE);
    buttons[1] = init_button_elem(EXIT_INFO);
    buttons[1] = init_button_func(buttons[1], EXIT_FUNC_C);
    buttons[1] = init_button_texture(buttons[1], EXIT_TEXTURE);
    buttons[2] = init_button_elem(SOUND_INFO);
    buttons[2] = init_button_func(buttons[2], SOUND_FUNC_C);
    buttons[2] = init_button_texture(buttons[2], SOUND_TEXTURE);
    if (check_button(buttons, 2) == 84)
        return (NULL);
    if (!init_second_part(buttons))
        return (NULL);
    return (buttons);
}