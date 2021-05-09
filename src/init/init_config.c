/*
** EPITECH PROJECT, 2020
** B-MUL-200-BAR-2-1-myrpg-javier.sanchez-castro
** File description:
** init_config.c
*/

#include "rpg.h"

config_t *error_config(config_t *config, char **content, char **split_content)
{
    my_printf(ERR_CONF);
    if (content)
        free_array(content);
    if (split_content)
        free_array(split_content);
    return (fill_config(config, split(read_file(CONFIG), "\n")));
}

config_t *put_info(config_t *config, char **info, int i)
{
    if (i == 0)
        config->name = my_strdup(info[1]);
    if (i == 1) {
        if (my_strcmp(BOY, info[1]))
            config->gender = 0;
        else
            config->gender = 1;
    }
    if (i == 2 || i == 3 || i == 4) {
        if (my_getnbr(info[1], 0) < 0)
            return (error_config(config, NULL, info));
        if (i == 2)
            config->health = my_getnbr(info[1], 0);
        else if (i == 3)
            config->level = my_getnbr(info[1], 0);
        else
            config->room = my_getnbr(info[1], 0);
    }
}

config_t *fill_config(config_t *config, char **content)
{
    int i = 0;
    char **split_info = NULL;

    if (!content)
        return (NULL);
    if (size_array(content) != 5)
        return (error_config(config, content, NULL));
    while (content[i]) {
        split_info = split(content[i], ":");
        if (!split_info)
            return (NULL);
        if (size_array(split_info) != 2)
            return (error_config(config, content, split_info));
        put_info(config, split_info, i);
        free_array(split_info);
        i++;
    }
    return (config);
}

config_t *init_config(char **av)
{
    config_t *config = malloc(sizeof(config_t));
    char *file_content = NULL;

    if (!config)
        return (NULL);
    if (!av[1]) {
        file_content = read_file(CONFIG);
        config->file = my_strdup(DEFAULT_SAVE);
    } else {
        file_content = read_file(av[1]);
        config->file = my_strdup(av[1]);
    }
    if (!file_content)
        return (NULL);
    return (fill_config(config, split(file_content, "\n")));
}