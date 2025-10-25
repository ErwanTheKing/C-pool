/*
** EPITECH PROJECT, 2025
** my_params_to_list
** File description:
** my_params_to_list
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list1 = NULL;
    linked_list_t *node;

    for (int i = 0; i < ac; i++) {
        node = malloc(sizeof(linked_list_t));
        node->data = av[i];
        node->next = list1;
        list1 = node;
    }
    return list1;
}
