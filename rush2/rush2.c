/*
** EPITECH PROJECT, 2025
** rush2
** File description:
** rush2
*/

#include "lib/include/libmy.h"
#include <unistd.h>
#include <stdlib.h>

void my_putfloat(float nb)
{
    int a = nb;
    int b = (nb * 100) - (a * 100);

    my_put_nbr(a);
    my_putchar('.');
    if (b < 10) {
        my_putchar('0');
        my_put_nbr(b);
    } else
        my_put_nbr(b);
}

static int char_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

static int function1(char **av, int i)
{
    int count = 0;

    for (int j = 0; av[1][j] != '\0'; j++) {
        if (av[1][j] == av[i][0])
            count++;
    }
    return count;
}

static int count_len(char *av)
{
    int count = 0;

    for (int l = 0; av[l] != '\0'; l++) {
        if (char_isalpha(av[l]) == 1)
            count++;
    }
    return count;
}

void results(char **av, char *letters)
{
    int count = 0;
    int a = 0;

    for (int i = 2; av[i] != NULL; i++) {
        count = function1(av, i);
        my_putchar(letters[a]);
        my_putchar(':');
        my_putchar(count + 48);
        my_putstr(" (");
        my_putfloat((float)(count) / count_len(av[1]) * 100);
        my_putstr("%)\n");
        count = 0;
        a++;
    }
}

static int exit_message(int ac, char **av)
{
    int len;

    for (len = 2; av[len] != NULL; len++) {
        if (my_str_isalpha(av[len]) == 0) {
            write(2, "there are other things besides letters", 38);
            return (84);
        }
    }
    if (ac < 3) {
        write(2, "there are other things besides letters", 38);
        return (84);
    }
    return 0;
}

int count_ocr(int ac, char **av)
{
    int len = 1;
    int letter_stock = 0;
    char *letters;

    if (exit_message(ac, av) == 84)
        return 84;
    for (len = 1; av[len] != NULL; len++);
    letters = malloc(sizeof(char) * (len + 1));
    for (int l = 2; av[l] != NULL; l++) {
        letters[letter_stock] = av[l][0];
        letter_stock++;
    }
    for (len = 1; av[len] != NULL; len++)
        my_strlowcase(av[len]);
    results(av, letters);
    return 0;
}

int main(int ac, char **av)
{
    count_ocr(ac, av);
    return 0;
}
