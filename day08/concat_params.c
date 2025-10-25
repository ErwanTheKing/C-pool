/*
** EPITECH PROJECT, 2025
** concat_params
** File description:
** concat_params
*/

#include "lib/include/libmy.h"
#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    char *str;
    int i;
    int j = 0;

    for (i = 0; argv[i] != NULL; i++)
        j = j + my_strlen(argv[i]) + 1;
    str = malloc(sizeof(char) * j);
    str[j] = '\0';
    for (i = 0; argv[i] != NULL; i++) {
        my_strcat(str, argv[i]);
        my_strcat(str, "\n");
    }
    return (str);
}
