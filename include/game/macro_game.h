/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** macro_game
*/

#ifndef MACRO_GAME_H_
#define MACRO_GAME_H_

#define ROOM_BG "resources/room/background.png"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1366, 768}
#define SCALE_BG (sfVector2f){1.405, 1.405}

#define PLAYER_TEXTURE "resources/character/spritesheet.png"
#define POS_PLAYER (sfVector2f){1920 / 2 - 64, 1080 / 2 - 64}
#define RECT_PLAYER (sfIntRect){0, 640, 64, 64}
#define SCALE_PLAYER (sfVector2f){2, 2}

#endif /* !MACRO_GAME_H_ */