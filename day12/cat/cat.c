/*
** EPITECH PROJECT, 2025
** cat
** File description:
** cat
*/

#include "../lib/include/my.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char *buffer_clean(char *buffer_full)
{
    for (int i = 0; buffer_full[i] != '\0'; i++)
        buffer_full[i] = 0;
    return buffer_full;
}

void my_cat(int ac, char **av)
{
    int size = 30000;
    char buffer[size];
    int fd = 1;

    if (ac == 1) {
        while (fd != 0) {
            fd = read(0, buffer, size - 1);
            write(1, buffer, fd);
        }
    }
    for (int nb_file = 1; nb_file < ac; nb_file++) {
        fd = open(av[nb_file], O_RDONLY);
        if (fd == -1) {
            write(2, "Error with open\n", 16);
        }
        fd = read(fd, buffer, size - 1);
        write(1, buffer, fd);
        buffer_clean(buffer);
    }
    close(fd);
}
