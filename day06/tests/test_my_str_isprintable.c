/*
** EPITECH PROJECT, 2025
** isprintable
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(dtest01, dtest01)
{
    char const str[6] = "ABCDE";

    int a = my_str_isprintable(str);
    cr_assert_eq(a, 1);
}

Test(dtest02, dtest02)
{
    char const str[7] =	"aAlpha ";

    int a = my_str_isprintable(str);
    cr_assert_eq(a, 0);
}
