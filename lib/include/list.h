/*
** EPITECH PROJECT, 2020
** list.h
** File description:
** list.h
*/

#ifndef list_H
#define list_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include "lib.h"

typedef struct list_s
{
    struct tower_s *tower;
    struct list_s *next;
    struct list_s *prev;
} list_t;

typedef struct control_s {
    list_t *first;
    list_t *last;
    int size;
} control_t;

list_t *create_elem_list(struct tower_s *tower);
control_t *add_start(control_t *list, struct tower_s *tower);
control_t *add_end(control_t *list, struct tower_s *tower);
void print_list(list_t *list);
void free_list(control_t *control);
int len_list(list_t *list);
void free_node(control_t *control, list_t *node);

#endif