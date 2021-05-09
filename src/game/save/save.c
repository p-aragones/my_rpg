/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** save.c
*/

#include <fcntl.h>
#include "game.h"

void write_life(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, LIFE, my_strlen(LIFE));
    tmp = my_getnbr(game->player->health, 0);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
    write_level(game, fd);
}

void write_level(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, LEVEL, my_strlen(LEVEL));
    tmp = my_getnbr(game->max_room, 0);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
}

void write_room(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, ROOM, my_strlen(ROOM));
    tmp = my_getnbr(game->current_room, 0);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
}

int save_info(game_t *game, window_t *window)
{
    int fd = open(window->config->file, O_WRONLY | O_APPEND | O_CREAT, 0644);

    if (fd == -1)
        return (84);
    write(fd, NAME, my_strlen(NAME));
    write(fd, window->config->name, my_strlen(window->config->name));
    write(fd, GENDER, my_strlen(GENDER));
    write(fd, window->config->gender, my_strlen(window->config->gender));
    write_life(game, fd);
    write_level(game, fd);
    write_room(game, fd);
    close(fd);
    return (0);
}