/*
** EPITECH PROJECT, 2025
** my_compute_power_it
** File description:
** iterative function
*/

int my_compute_power_it(int nb, int p)
{
    int count = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (int i = 1; i < p; i++) {
        count = count * nb;
    }
    return (count);
}
