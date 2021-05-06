/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** maccro_pause.h
*/

#ifndef MACCRO_PAUSE_H
#define MACCRO_PAUSE_H

#define N_BUTTONS_PAUSE 6

#define MENU "resources/sprites/buttons/pause_buttons/menu.png"
#define MENU_HOVER "resources/sprites/buttons/pause_buttons/menu_hover.png"
#define MENU_CLICK "resources/sprites/buttons/pause_buttons/menu_click.png"

#define RESUME "resources/sprites/buttons/pause_buttons/resume.png"
#define RESUME_HOVER "resources/sprites/buttons/pause_buttons/resume_hover.png"
#define RESUME_CLICK "resources/sprites/buttons/pause_buttons/resume_click.png"

#define POS_MENU (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 - 35}
#define POS_RESUME (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 - 120}

#define RECT_MENU (sfIntRect){0, 0, 49, 20}
#define RECT_RESUME (sfIntRect){0, 0, 49, 20}

#define SIZE_MENU (sfVector2i){49, 20}
#define SIZE_RESUME (sfVector2i){49, 20}

#define MENU_FUNCTION launch_menu
#define RESUME_FUNCTION resume

#define MENU_INFO MENU, POS_MENU, RECT_MENU, SIZE_MENU
#define RESUME_INFO RESUME, POS_RESUME, RECT_RESUME, SIZE_RESUME

#define MENU_TEXTURE MENU_HOVER, MENU_CLICK
#define RESUME_TEXTURE RESUME_HOVER, RESUME_CLICK

#endif