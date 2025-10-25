/*
** EPITECH PROJECT, 2025
** my_rev_list
** File description:
** my_rev_list
*/

#include "include/mylist.h"
#include <stdlib.h>
#include <stdio.h>

void my_rev_list(linked_list_t **begin)
{
    linked_list_t **list_rev = malloc(sizeof(linked_list_t));
    int i;

    for (i = 0; begin != NULL; i++) {
        list_rev = begin;
        (*begin) = (*begin)->next;
    }
}
