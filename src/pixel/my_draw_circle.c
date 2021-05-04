/*
** EPITECH PROJECT, 2021
** my_draw_circle.c
** File description:
** my_draw_circle.c
*/

#include "game.h"

typedef struct s_circle
{
    sfVector2i pixel;
    sfColor color;
} t_circle;

void my_pixel_circle(framebuffer_t *frbuff,
                    sfVector2i center,
                    int radius,
                    t_circle *circle)
{
    int a = pow(circle->pixel.x - center.x, 2);
    int b = pow(circle->pixel.y - center.y, 2);

    if (a + b <= pow(radius, 2)) {
        my_put_pixel(frbuff, circle->pixel.x, circle->pixel.y, circle->color);
    }
}

int my_draw_circle(framebuffer_t *framebuffer,
                    sfVector2i center,
                    int radius,
                    sfColor color)
{
    t_circle *circle = malloc(sizeof(t_circle));

    if (circle == NULL)
        return (84);
    circle->pixel.x = center.x - radius;
    circle->pixel.y = center.y - radius;
    circle->color = color;
    while (circle->pixel.x < center.x * 2) {
        while (circle->pixel.y < center.y * 2) {
            my_pixel_circle(framebuffer, center, radius, circle);
            circle->pixel.y++;
        }
        circle->pixel.y = 0;
        circle->pixel.x++;
    }
}