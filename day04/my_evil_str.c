/*
** EPITECH PROJECT, 2025
** my_evil_str
** File description:
** reversed string
*/

#include <stdio.h>

char *my_evil_str(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char a;

    for (; j < i; i-- && j++) {
        a = str[j];
        str[j] = str[i];
        str[i] = a;
    }
    return (str);
}
