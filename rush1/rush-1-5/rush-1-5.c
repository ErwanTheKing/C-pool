/*
** EPITECH PROJECT, 2025
** rush-1-5
** File description:
** rush
*/

void line(int x)
{
    for (int i = 0; i != x; i++) {
        my_putchar(66);
    }
}

void function1(int x)
{
    for (int x3 = x; x3 != 0; x3--) {
        if (x3 == x || x3 == 1)
            my_putchar(66);
        else
            my_putchar(' ');
    }
}

void column(int x, int y)
{
    for (int y2 = y; y2 != 2; y2--) {
        my_putchar('\n');
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
        my_putchar(65);
        line(x - 2);
        my_putchar(67);
        column(x, y);
        my_putchar('\n');
        my_putchar(67);
        line(x - 2);
        my_putchar(65);
    }
}
