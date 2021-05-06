/*
** EPITECH PROJECT, 2021
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_sounds
*/

#include "game.h"

sounds_t *init_sounds(void)
{
    sounds_t *sounds = malloc(sizeof(sounds_t));

    if (!sounds)
        return (NULL);
    sounds->door = sfSound_create();
    sounds->oof = sfSound_create();
    sounds->shoot = sfSound_create();
    sfSound_setBuffer(sounds->door, sfSoundBuffer_createFromFile(DOOR_SOUND));
    sfSound_setBuffer(sounds->oof, sfSoundBuffer_createFromFile(OOF_SOUND));
    sfSound_setBuffer(sounds->shoot, sfSoundBuffer_createFromFile(SHOT_SOUND));
    return (sounds);
}