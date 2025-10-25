/*
** EPITECH PROJECT, 2025
** rush-1-2
** File description:
** rush
*/

void line(int x)
{
    for (int i = 0; i != x; i++) {
        my_putchar('*');
    }
}

void function1(int x)
{
    for (int x3 = x; x3 != 0; x3--) {
        if (x3 == x || x3 == 1)
            my_putchar('*');
        else
            my_putchar(' ');
    }
}

void column(int x, int y)
{
    for (int y2 = y; y2 != 2; y2--) {
        function1(x);
    }
}

void rush(int x, int y)
{
    if (x < 1 || y < 1) {
        my_putstr("Invalid size");
        return;
    }
    if (y == 1) {
        line(x);
    }
    if (x == 1 && x != y) {
        column(x, y + 2);
    }
    if (x > 1 && y > 1) {
        my_putchar('/');
        line(x - 2);
        my_putchar(92);
        column(x, y);
        my_putchar('\n');
        my_putchar(92);
        line(x - 2);
        my_putchar('/');
    }
}
