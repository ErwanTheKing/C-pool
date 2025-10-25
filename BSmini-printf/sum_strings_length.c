/*
** EPITECH PROJECT, 2025
** mini-printf
** File description:
** sum_strings_length
*/

#include <stdarg.h>
#include "include/my.h"

int sum_strings_length(int n, ...)
{
    va_list list;
    int count = 0;

    va_start(list, n);
    for (int a = 0; a < n; a++) {
        count = count + my_strlen(va_arg(list, char*));
    }
    va_end(list);
    return count;
}
