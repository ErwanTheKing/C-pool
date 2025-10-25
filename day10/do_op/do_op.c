/*
** EPITECH PROJECT, 2025
** do_op
** File description:
** do_op
*/

#include <unistd.h>
#include "../lib/include/libmy.h"

static int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

static char is_op(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        return 1;
    return 0;
}

static int my_getnbr2(char const *str)
{
    long j = 0;
    int signe = 1;
    int a;

    for (a = 0; is_num(str[a]) == 0 && str[a] != '\0'; a++) {
        if (str[a] == '-')
            signe *= -1;
    }
    if (is_num(str[0]) == 0 || is_op(str[0] == 0))
        return 0;
    for (int i = a; is_num(str[i]) == 1 && str[i] != '\0'; i++) {
        if (str[i + 1] != '+' || str[i + 1] != '-') {
            j = (j * 10) + (str[i] - 48);
        }
    }
    j = j * signe;
    if (j > 2147483647 || j < -2147483648)
        return 0;
    return j;
}

static char my_getop(char *str)
{
    if (is_op(str[0]) == 1)
        return str[0];
    return '0';
}

int modulo(int value_1, char op, int value_2)
{
    if (op == '%') {
        if (value_2 == 0) {
            write(2, "Stop: modulo by zero", 20);
            return 84;
        }
        my_put_nbr(value_1 % value_2);
    }
    return 0;
}

int result(int value_1, char op, int value_2)
{
    if (op == '+')
        my_put_nbr(value_1 + value_2);
    if (op == '-')
        my_put_nbr(value_1 - value_2);
    if (op == '*')
        my_put_nbr(value_1 * value_2);
    if (op == '/') {
        if (value_2 == 0) {
            write(2, "Stop: division by zero", 22);
            return 84;
        }
        my_put_nbr(value_1 / value_2);
    }
    if (op == '%') {
        if (modulo(value_1, op, value_2) == 84)
            return 84;
    }
    return 0;
}

int do_op(int ac, char **av)
{
    int value_1;
    char op;
    int value_2;

    if (ac != 4){
        write(2, "Invalid input", 13);
        return 84;
    }
    value_1 = my_getnbr2(av[1]);
    op = my_getop(av[2]);
    value_2 = my_getnbr2(av[3]);
    for (int i = 0; av[i] != NULL; i++) {
        if (op == '0') {
            my_putchar(48);
            return 0;
        }
    }
    if (result(value_1, op, value_2) == 84)
        return 84;
    return 0;
}
