/*
** EPITECH PROJECT, 2025
** my_print_comb
** File description:
** test
*/

#include <unistd.h>

int myputchar(int a, int b, int c)
{
    my_putchar(a + 48);
    my_putchar(b + 48);
    my_putchar(c + 48);
    my_putchar(',');
    my_putchar(' ');
    return (0);
}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    while (a != 7) {
        if (a < b && b < c) {
            myputchar(a, b, c);
        }
        c++;
        if (c == 10) {
            c = 0;
            b++;
        }
        if (b == 10) {
            b = 0;
            a++;
        }
    }
    write(1, "789\n", 4);
    return (0);
}
