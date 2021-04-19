/*
** EPITECH PROJECT, 2020
** lib
** File description:
** read_file.c
*/

#include "lib.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int get_size_file(char *path)
{
    struct stat info;

    stat(path, &info);
    return (info.st_size);
}

char *read_file(char *path)
{
    char *buffer = NULL;
    int size_file = get_size_file(path);
    int fd = open(path, O_RDONLY);

    if (fd == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * (size_file + 1));
    if (!buffer)
        return (NULL);
    if (read(fd, buffer, size_file) == -1)
        return (NULL);
    buffer[size_file] = '\0';
    close(fd);
    return (buffer);
}