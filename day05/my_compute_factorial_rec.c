/*
** EPITECH PROJECT, 2025
** my_compute_factorial_rec
** File description:
** a recursive function that returns the factoral of the number
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return (1);
    else if (nb < 0 || nb > 12)
        return (0);
    return (nb * my_compute_factorial_rec(nb - 1));
}
