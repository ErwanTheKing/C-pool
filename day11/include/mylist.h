/*
** EPITECH PROJECT, 2025
** struct
** File description:
** struct
*/

#ifndef STRUCT_H
    #define STRUCT_H
typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

linked_list_t *my_params_to_list(int ac, char *const *av);

#endif /*STRUCT_H*/
