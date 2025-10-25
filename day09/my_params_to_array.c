/*
** EPITECH PROJECT, 2025
** my_params_to_array
** File description:
** my_params_to_array
*/

#include <stdio.h>
#include "lib/include/libmy.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    int i;
    struct info_param *infos = malloc(sizeof(struct info_param) * (ac + 1));

    for (i = 0; i < ac; i++) {
        infos[i].length = my_strlen(av[i]);
        infos[i].str = av[i];
        infos[i].copy = my_strdup(av[i]);
        infos[i].word_array = my_str_to_word_array(av[i]);
    }
    infos[i].str = NULL;
    return infos;
}
