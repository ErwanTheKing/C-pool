/*
** EPITECH PROJECT, 2025
** get_color
** File description:
** get_color
*/

#include "lib/include/libmy.h"

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;

    color += (int)red << 16;
    color += (int)green << 8;
    color += (int)blue;
    return color;
}
