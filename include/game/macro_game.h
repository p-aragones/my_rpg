/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** macro_game
*/

#ifndef MACRO_GAME_H_
#define MACRO_GAME_H_

// ROOM
#define ROOM_BG "resources/room/background.png"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1366, 768}
#define SCALE_BG (sfVector2f){1.405, 1.405}

#define DOOR_TEXTURE "resources/room/doors.png"
#define POS_DOOR (sfVector2f){1900, 1080 / 2}
#define POS_BDOOR (sfVector2f){-100, 1080 / 2 + 60}
#define RECT_DOOR (sfIntRect){0, 0, 50, 50}
#define SCALE_DOOR (sfVector2f){2, 2}

// PLAYER
#define PLAYER_TEXTURE "resources/character/spritesheet.png"
#define POS_PLAYER (sfVector2f){1920 / 2 - 64, 1080 / 2 - 64}
#define RECT_PLAYER (sfIntRect){0, 640, 64, 64}
#define SCALE_PLAYER (sfVector2f){2, 2}

#define UP 0, 1
#define DOWN 0, -1
#define LEFT -1, 0
#define RIGHT 1, 0

// ENEMIES
#define PLAYER_TEXTURE "resources/character/spritesheet.png"
#define POS_PLAYER (sfVector2f){1920 / 2 - 64, 1080 / 2 - 64}
#define RECT_PLAYER (sfIntRect){0, 640, 64, 64}
#define SCALE_PLAYER (sfVector2f){2, 2}

#define BAT_TEXTURE "resources/enemies/bat.png.png"
#define POS_BAT (sfVector2f){0, 0}
#define RECT_BAT (sfIntRect){0, 640, 64, 64}
#define SCALE_BAT (sfVector2f){2, 2}

#define DIP_TEXTURE "resources/enemies/dip.png"
#define POS_DIP (sfVector2f){0, 0}
#define RECT_DIP (sfIntRect){0, 640, 64, 64}
#define SCALE_DIP (sfVector2f){2, 2}

#define GHOST_TEXTURE "resources/enemies/ghost.png"
#define POS_GHOST (sfVector2f){0, 0}
#define RECT_GHOST (sfIntRect){0, 640, 64, 64}
#define SCALE_GHOST (sfVector2f){2, 2}

#define HEAD_TEXTURE "resources/enemies/head.png"
#define POS_HEAD (sfVector2f){0, 0}
#define RECT_HEAD (sfIntRect){0, 640, 64, 64}
#define SCALE_HEAD (sfVector2f){2, 2}

#define SPIKE_TEXTURE "resources/enemies/spike.png"
#define POS_SPIKE (sfVector2f){0, 0}
#define RECT_SPIKE (sfIntRect){0, 640, 64, 64}
#define SCALE_SPIKE (sfVector2f){2, 2}

#endif /* !MACRO_GAME_H_ */