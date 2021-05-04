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
#define SCALE_BG_START (sfVector2f){3.405, 3.405}

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

// NPC
#define NPC_TEXTURE "resources/character/old_man.png"
#define POS_NPC (sfVector2f){1920 / 2 - 80, 100}
#define RECT_NPC (sfIntRect){0, 0, 180, 120}
#define SCALE_NPC (sfVector2f){1, 1}

#define POS_TEXT_NPC (sfVector2f){1920 / 2 - 280, 175}
#define POS_BALL_NPC (sfVector2f){1920 / 2 - 20, 1080 / 2 - 100}

// BALL
#define BALL_TEXTURE "resources/character/fireball.png"
#define POS_BALL (sfVector2f){-100, -100}
#define RECT_BALL (sfIntRect){0, 0, 947, 843}
#define SCALE_BALL (sfVector2f){0.05, 0.05}

// HUD
#define HEART_TEXTURE "resources/hud/heart.png"
#define POS_HEART (sfVector2f){0, 0}
#define RECT_HEART (sfIntRect){0, 0, 720, 720}
#define SCALE_HEART (sfVector2f){0.05, 0.05}

#define SCORE_POS (sfVector2f){1920 / 2, 10}
#define SCORE_SIZE 80

// ENEMIES
#define BAT_TEXTURE "resources/enemies/bat.png"
#define POS_BAT (sfVector2f){0, 0}
#define RECT_BAT (sfIntRect){0, 0, 48, 48}
#define SCALE_BAT (sfVector2f){2.5, 2.5}
// [HEALTH, SPEED]
#define BAT_STATS 5, 4

#define DIP_TEXTURE "resources/enemies/dip.png"
#define POS_DIP (sfVector2f){0, 0}
#define RECT_DIP (sfIntRect){0, 0, 32, 32}
#define SCALE_DIP (sfVector2f){3, 3}
// [HEALTH, SPEED]
#define DIP_STATS 1, 3

#define GHOST_TEXTURE "resources/enemies/ghost.png"
#define POS_GHOST (sfVector2f){0, 0}
#define RECT_GHOST (sfIntRect){0, 0, 32, 32}
#define SCALE_GHOST (sfVector2f){2.5, 2.5}
// [HEALTH, SPEED]
#define GHOST_STATS 1, 5

#define HEAD_TEXTURE "resources/enemies/head.png"
#define POS_HEAD (sfVector2f){0, 0}
#define RECT_HEAD (sfIntRect){0, 0, 32, 30}
#define SCALE_HEAD (sfVector2f){2.5, 2.5}
// [HEALTH, SPEED]
#define HEAD_STATS 20, 2

#define SPIKE_TEXTURE "resources/enemies/spike.png"
#define POS_SPIKE (sfVector2f){0, 0}
#define RECT_SPIKE (sfIntRect){0, 0, 48, 48}
#define SCALE_SPIKE (sfVector2f){3, 3}
// [HEALTH, SPEED]
#define SPIKE_STATS 10, 1

// INVENTORY

#define NUM_OBJ 5

#define START_OBJ (sfVector2f){-1000, -1000}
#define OBJ_RECT (sfIntRect){0, 0, 32, 32}

#define INV_TEXTURE "resources/items/inventory.png"
#define INV_POS (sfVector2f){1520, 980}
#define INV_RECT (sfIntRect){0, 0, 145, 35}
#define INV_SCALE (sfVector2f){2.2, 2.2}

#define ARROW_TEXTURE "resources/items/arrow.png"
#define ARROW_POS (sfVector2f){1710, 910}

#define CROSS_TEXTURE "resources/items/cross.png"
#define CROSS_POS  (sfVector2f){1760, 910}

#define SNACK_TEXTURE "resources/items/snack.png"
#define SNACK_POS  (sfVector2f){1810, 910}

#define WHIP_TEXTURE "resources/items/whip.png"
#define WHIP_POS  (sfVector2f){1860, 910}


// BOSS

#define SCALE_BOSS (sfVector2f){10, 10}

#endif /* !MACRO_GAME_H_ */