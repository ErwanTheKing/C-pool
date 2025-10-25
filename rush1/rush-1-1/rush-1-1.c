/*
** EPITECH PROJECT, 2025
** rush
** File description:
** Assignement 1
*/

void line(int x)
{
    int angle = 'o';
    int abs = '-';

    for (int x2 = x; x2 != 2; x2--) {
        my_putchar(abs);
    }
    my_putchar(angle);
}

void function1(int x)
{
    int ord = '|';

    for (int x3 = x; x3 != 0; x3--) {
        if (x3 == x || x3 == 1)
            my_putchar(ord);
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
    my_putchar('o');
    if (x > 1) {
        line(x);
    }
    if (y > 1) {
        column(x, y);
    }
    my_putchar('\n');
    if (y > 1 && x > 1) {
        my_putchar('o');
        line(x);
    }
    if (y > 1 && x < 2) {
        my_putchar('o');
    }
}
