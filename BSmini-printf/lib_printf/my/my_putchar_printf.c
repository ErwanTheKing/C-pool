/*
** EPITECH PROJECT, 2025
** my_putchar_printf
** File description:
** putchar for printf
*/

#include <unistd.h>
#include <stdarg.h>

int my_putchar_printf(va_list list)
{
    int c = va_arg(list, int);

    write(1, &c, 1);
    return 1;
}
