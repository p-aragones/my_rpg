/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** save.c
*/

#include <fcntl.h>
#include "game.h"
#include "tools.h"

void write_life(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, LIFE, my_strlen(LIFE));
    tmp = my_itoa(game->player->health);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
}

void write_level(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, LEVEL, my_strlen(LEVEL));
    tmp = my_itoa(game->max_room);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
}

void write_room(game_t *game, int fd)
{
    char *tmp = NULL;

    write(fd, ROOM, my_strlen(ROOM));
    tmp = my_itoa(game->current_room);
    write(fd, tmp, my_strlen(tmp));
    free(tmp);
}

void write_gender(window_t *window, int fd)
{
    write(fd, GENDER, my_strlen(GENDER));
    if (window->config->gender = 0)
        write(fd, BOY, my_strlen(BOY));
    else
        write(fd, GIRL, my_strlen(GIRL));
}

int save_info(game_t *game, window_t *window)
{
    int fd = open(window->config->file, O_WRONLY | O_CREAT, 0644);

    if (fd == -1)
        return (84);
    write(fd, NAME, my_strlen(NAME));
    write(fd, window->config->name, my_strlen(window->config->name));
    write_gender(window, fd);
    write_life(game, fd);
    write_level(game, fd);
    write_room(game, fd);
    close(fd);
    return (0);
}