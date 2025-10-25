/*
** EPITECH PROJECT, 2025
** mini-printf
** File description:
** sum_numbers
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    va_list list;
    int count = 0;

    va_start(list, n);
    for (int a = 0; a < n; a++) {
        count = count + va_arg(list, int);
    }
    va_end(list);
    return count;
}
