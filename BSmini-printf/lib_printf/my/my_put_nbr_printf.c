/*
** EPITECH PROJECT, 2025
** my_put_nbr
** File description:
** test
*/

#include "../../include/my.h"
#include <stdarg.h>

int my_put_nbr_printf(va_list list)
{
    int nb = va_arg(list, int);
    int count = 0;

    my_put_nbr(nb);
    for (count; nb > 0; count++) {
        nb = nb / 10;
    }
    return count;
}
