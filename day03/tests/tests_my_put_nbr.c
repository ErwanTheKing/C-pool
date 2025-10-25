/*
** EPITECH PROJECT, 2025
** test put nbr
** File description:
** test put nbr
*/

#include <criterion/criterion.h>

Test(putnbr, putnbr)
{
    int a = my_put_nbr(457);

    cr_assert_eq(a, 0);
}
