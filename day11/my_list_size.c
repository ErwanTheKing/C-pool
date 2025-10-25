/*
** EPITECH PROJECT, 2025
** my_list_size
** File description:
** my_list_size
*/

#include <stdio.h>
#include <stdlib.h>
#include "lib/include/my.h"
#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i;

    for (i = 0; begin->next != NULL; i++) {
        begin = begin->next;
    }
    return i;
}
