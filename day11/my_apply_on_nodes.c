/*
** EPITECH PROJECT, 2025
** my_apply_on_nodes
** File description:
** my_apply_on_nodes
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    for (int i = 0; begin != NULL; i++) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return 0;
}
