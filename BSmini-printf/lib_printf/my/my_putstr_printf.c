/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** it's a function that displays the characters
*/

#include <stdarg.h>
#include "../../include/my.h"

int my_putstr_printf(va_list list)
{
    char *c = va_arg(list, char*);
    int i = 0;

    for (i; c[i] != '\0'; i++) {
        my_putchar(c[i]);
    }
    return i;
}
