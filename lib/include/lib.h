/*
** EPITECH PROJECT, 2020
** lib
** File description:
** lib.h
*/

#ifndef LIB_H
#define LIB_H

#include "printf.h"
#include "list.h"

int my_put_nbr(int nb);
void my_putchar(char c);
void put_error(char const *str);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr_base(int nbr, char *base);
int my_put_unsigned_nbr(unsigned int nb);
char *my_strlowcase(char *str);
char *my_strdup(char const *src);
int my_getnbr(char const *str, int i);
void free_array(char **array);
int size_array(char **array);
void print_strarray(char **array);
char **copy_array(char **array);

char *my_strcat(char *dest, char const *src);

int is_num(char c);
int is_letter(char c);
int is_alphanum(char c);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
int my_str_isalphanum(char *str);

char **split(char *str, char c, char d);

int get_size_file(char *path);
char *read_file(char *path);

#endif