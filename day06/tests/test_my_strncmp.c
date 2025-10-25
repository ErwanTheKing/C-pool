/*
** EPITECH PROJECT, 2025
** test07
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(ncomp, ncomp)
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    int a;
    int b;

    a = my_strncmp(s1, s2, 3);
    b = strncmp(s1, s2, 3);
    cr_assert_eq(a, b);
}

Test(ncomp2, ncomp2)
{
    char *s1 = "Hello";
    char *s2 = "Heilo";
    int a;
    int b;

    a = my_strncmp(s1, s2, 3);
    b = strncmp(s1, s2, 3);
    cr_assert_eq(a, b);
}

Test(ncomp3, ncomp3)
{
    char *s1 = "Heilo";
    char *s2 = "Hello";
    int a;
    int b;

    a = my_strncmp(s1, s2, 3);
    b = strncmp(s1, s2, 3);
    cr_assert_eq(a, b);
}
