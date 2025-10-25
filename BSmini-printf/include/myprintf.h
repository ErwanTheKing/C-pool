/*
** EPITECH PROJECT, 2025
** mini-printf
** File description:
** The libmyprintf.h
*/

#ifndef MINI_PRINTF_LIBMYPRINTF_H
    #define MINI_PRINTF_LIBMYPRINTF_H
    #include <stdarg.h>
int my_putchar_printf(va_list list);
int my_putstr_printf(va_list list);
int my_put_nbr_printf(va_list list);
void my_putchar(char c);
int my_put_nbr(int nb);
#endif /* MINI_PRINTF_LIBMYPRINTF_H */
