/*
** EPITECH PROJECT, 2025
** my_sort_word_array
** File description:
** my_sort_word_array
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib/include/my.h"

int len_array(char **str)
{
    int i;

    for (i = 1; str[i] != NULL; i++);
    return i;
}

char **function(char **tab)
{
    for (i = 0; tab[i + 1] != NULL; i++) {
        if (tab[i][j] > tab[i + 1][j]) {
            tab_t = malloc(sizeof(char) * my_strlen(tab[i]) + 1);
            tab_t = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tab_t;
        }
        if (tab[i][j] == tab[i + 1][j])
            j++;
    }
    return tab
}

int my_sort_word_array(char **tab)
{
    int i;
    int j = 0;
    char *tab_t;

    for (int x = 0; x <= len_array(tab); x++) {
        function0(tab);
    }
    my_show_word_array(tab);
    return 0;
}
