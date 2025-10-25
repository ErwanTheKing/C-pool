/*
** EPITECH PROJECT, 2025
** mini-printf
** File description:
** The disp_stdarg.c
*/

#include "include/my.h"
#include <stdarg.h>
#include "include/myprintf.h"

void function(va_list list, int i, char *s)
{
    char *flags = "csi";
    int (*p[])(va_list) = {my_putchar_printf, my_putstr_printf,
        my_put_nbr_printf};

    for (int j = 0; flags[j] != '\0'; j++) {
        if (s[i] == flags[j]) {
            p[j](list);
            my_putchar('\n');
            break;
        }
    }
}

void disp_stdarg(char *s, ...)
{
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i] != '\0'; i++) {
        function(list, i, s);
    }
    va_end(list);
}
