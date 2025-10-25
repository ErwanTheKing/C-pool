/*
** EPITECH PROJECT, 2025
** test06
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(comp, comp)
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    int a;
    int b;

    a = my_strcmp(s1, s2);
    b = strcmp(s1, s2);
    cr_assert_eq(a, b);
}

Test(comp2, comp2)
{
    char *s1 = "Hello";
    char *s2 = "Hell";
    int a;
    int b;

    a = my_strcmp(s1, s2);
    b = strcmp(s1, s2);
    cr_assert_eq(a, b);
}

Test(comp3, comp3)
{
    char *s1 = "Hell";
    char *s2 = "Hello";
    int a;
    int b;

    a = my_strcmp(s1, s2);
    b = strcmp(s1, s2);
    cr_assert_eq(a, b);
}
