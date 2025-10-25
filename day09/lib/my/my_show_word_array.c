/*
** EPITECH PROJECT, 2025
** my_show_word_array
** File description:
** my_show_word_array
*/

#include <stdlib.h>
#include "../include/libmy.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
    }
    return (0);
}
