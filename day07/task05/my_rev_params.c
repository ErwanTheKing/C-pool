/*
** EPITECH PROJECT, 2025
** main
** File description:
** main
*/

#include "../lib/include/libmy.h"

int main(int argc, char **argv)
{
    int i;

    while (argc > 0) {
        argc--;
        my_putstr(argv[argc]);
    }
    return (0);
}
