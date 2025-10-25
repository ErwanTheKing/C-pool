/*
** EPITECH PROJECT, 2025
** my_print_alpha
** File description:
** it's a simple function to displays the lowercase alphabet
*/

int my_print_alpha(void)
{
    for (int i = 97; i < 123; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return (0);
}
