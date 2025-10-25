/*
** EPITECH PROJECT, 2025
** my_compute_factorial_it
** File description:
** it's an interative function thats returns the factorial of the number
*/

int my_compute_factorial_it(int nb)
{
    int count = 1;

    if (nb == 0)
        return (1);
    else if (nb < 0 || nb > 12)
        return (0);
    for (int nw_nb = nb - 1; nw_nb >= 0;) {
        count = count * (nb - nw_nb);
        nw_nb--;
    }
    return (count);
}
