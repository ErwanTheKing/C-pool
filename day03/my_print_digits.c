/*
** EPITECH PROJECT, 2025
** my_print_digits
** File description:
** It's a simple function to displays all the digits
*/

int my_print_digits(void)
{
    for (int k = 48; k < 58; k++) {
        my_putchar(k);
    }
    my_putchar('\n');
    return (0);
}
