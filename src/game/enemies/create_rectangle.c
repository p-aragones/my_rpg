/*
** EPITECH PROJECT, 2021
** create_rectangle.c
** File description:
** create_rectangle.c
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include "csfml_lib.h"

sfRectangleShape *create_rectangle(sfVector2f position, sfColor color,
sfVector2u vector)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();

    sfRectangleShape_setOutlineThickness(rectangle, 2);
    sfRectangleShape_setOutlineColor(rectangle, color);
    sfRectangleShape_setPosition(rectangle, position);
    sfRectangleShape_setFillColor(rectangle, sfTransparent);
    sfRectangleShape_setSize(rectangle, (sfVector2f) {vector.x, vector.y});
    return (rectangle);
}