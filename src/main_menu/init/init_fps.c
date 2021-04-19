/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** init_fps_text.c
*/

#include "main_menu.h"

fps_t *init_fps(void)
{
    fps_t *fps = malloc(sizeof(fps_t));

    if (!fps)
        return (NULL);
    fps->font = sfFont_createFromFile(FONT);
    fps->text = sfText_create();
    fps->fps = 60;
    if (!fps->font || !fps->text)
        return (NULL);
    sfText_setString(fps->text, "60 FPS");
    sfText_setFont(fps->text, fps->font);
    sfText_setCharacterSize(fps->text, FONT_SIZE_FPS);
    sfText_setPosition(fps->text, POS_FPS_TEXT);
    return (fps);
}