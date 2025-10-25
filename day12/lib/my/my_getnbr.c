/*
** EPITECH PROJECT, 2025
** my_getnbr
** File description:
** return a number
*/

#include <stdio.h>
#include "my.h"

static int is_num(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    long j = 0;
    int signe = 1;
    int a;

    for (a = 0; is_num(str[a]) == 0 && str[a] != '\0'; a++) {
        if (str[a] == '-')
            signe *= -1;
    }
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
