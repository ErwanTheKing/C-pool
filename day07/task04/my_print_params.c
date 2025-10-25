/*
** EPITECH PROJECT, 2025
** main
** File description:
** main
*/

#include "../lib/include/libmy.h"

int main(int argc, char **argv)
{
    for (int i = 0; argv[i] != 0; i++) {
        my_putstr(argv[i]);
    }
    return (0);
}
