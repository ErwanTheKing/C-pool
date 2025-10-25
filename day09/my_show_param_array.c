/*
** EPITECH PROJECT, 2025
** my_show_param_array
** File description:
** my_show_param_array
*/

#include <stdlib.h>
#include "lib/include/libmy.h"
#include <stdio.h>

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != NULL; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
    }
    return 0;
}
