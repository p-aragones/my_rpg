/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-mydefender-leon.ducasse
** File description:
** maccro_menu.h
*/

#ifndef MACCRO_MENU_H
#define MACCRO_MENU_H

#define N_BUTTONS 7

#define FONC_HOVER int (*hover_fonc)(struct button_s *button)
#define FONC_CLICK int (*click_fonc)(window_t *, menu_t *, \
struct button_s *button)

#define SCALE_BTN (sfVector2f){3, 3}
#define SCALE_SMALL_BTN (sfVector2f){0.7, 0.7}

#define PLAY_BTN "resources/buttons/red/play.png"
#define PLAY_HOVER "resources/buttons/blue/play.png"
#define PLAY_CLICK "resources/buttons/pressed/play.png"
#define POS_PLAY (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 - 35}
#define RECT_PLAY (sfIntRect){0, 0, 49, 20}
#define SIZE_PLAY (sfVector2i){49, 20}
#define PLAY_FONC_C play_click
#define PLAY_INFO PLAY_BTN, POS_PLAY, RECT_PLAY, SIZE_PLAY
#define PLAY_TEXTURE PLAY_HOVER, PLAY_CLICK

#define EXIT_BTN "resources/buttons/red/exit.png"
#define EXIT_HOVER "resources/buttons/blue/exit.png"
#define EXIT_CLICK "resources/buttons/pressed/exit.png"
#define POS_EXIT (sfVector2f){X_WINDOW / 2 - 70, Y_WINDOW / 2 + 50}
#define RECT_EXIT (sfIntRect){0, 0, 49, 20}
#define SIZE_QUIT (sfVector2i){49, 20}
#define EXIT_FONC_C exit_click
#define EXIT_INFO EXIT_BTN, POS_EXIT, RECT_EXIT, SIZE_QUIT
#define EXIT_TEXTURE EXIT_HOVER, EXIT_CLICK

#define SOUND_ON_BTN "resources/buttons/red_small/sound_on.png"
#define SOUND_ON_HOVER "resources/buttons/blue_small/\
sound_on_hover.png"
#define SOUND_ON_CLICK "resources/buttons/red_small/sound_off.png"
#define POS_SOUND (sfVector2f){50, Y_WINDOW / 2 - 200}
#define RECT_SOUND (sfIntRect){0, 0, 109, 109}
#define SIZE_SOUND (sfVector2i){109, 109}
#define SOUND_FONC_C sound_click
#define SOUND_INFO SOUND_ON_BTN, POS_SOUND, RECT_SOUND, SIZE_SOUND
#define SOUND_TEXTURE SOUND_ON_HOVER, SOUND_ON_CLICK

#define FPS_BTN "resources/buttons/empty_red.png"
#define FPS_HOVER "resources/buttons/empty_blue.png"
#define FPS_CLICK "resources/buttons/empty_grey.png"
#define POS_FPS (sfVector2f){50, Y_WINDOW / 2 - 300}
#define RECT_FPS (sfIntRect){0, 0, 49, 20}
#define SIZE_FPS (sfVector2i){49, 20}
#define FPS_FONC_C fps_click
#define FPS_INFO FPS_BTN, POS_FPS, RECT_FPS, SIZE_QUIT
#define FPS_TEXTURE FPS_HOVER, FPS_CLICK

#define MENU_BACKGROUND "resources/room/background.png"
#define POS_BG (sfVector2f){0, 0}
#define RECT_BG (sfIntRect){0, 0, 1000, 563}
#define SCALE_BG (sfVector2f){1.92, 1.92}

#define MUSIC "resources/sound/music.wav"

#define POS_FPS_TEXT (sfVector2f){60, Y_WINDOW / 2 - 354}
#define FONT_SIZE_FPS 95

#define HOWTO "resources/buttons/howto.png"
#define POS_HOWTO (sfVector2f){0, 410}
#define RECT_HOWTO (sfIntRect){0, 0, 1120, 920}
#define SCALE_HOWTO (sfVector2f){0.15, 0.15}

#define HOWTO_BG "resources/room/background.png"
#define POS_HOWTO_BG (sfVector2f){1920, 0}
#define POS_HOWTO_BG_PLACED (sfVector2f){0, 0}
#define RECT_HOWTO_BG (sfIntRect){0, 0, 1920, 1080}

#endif