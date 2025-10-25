/*
** EPITECH PROJECT, 2025
** my_print_revalpha
** File description:
** It's a simple fuction to displays the lower alphabet in revserse
*/

int my_print_revalpha(void)
{
    for (int i = 122; i > 96; i--) {
        my_putchar(i);
    }
    my_putchar('\n');
    return (0);
}
