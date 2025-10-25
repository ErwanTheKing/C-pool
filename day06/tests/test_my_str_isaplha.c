/*
** EPITECH PROJECT, 2025
** isalpha
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(test01, test01)
{
    char const str[6] = "Alpha";

    int a = my_str_isalpha(str);
    cr_assert_eq(a, 1);
}

Test(test02, test02)
{
    char const str[7] =	"0Alpha";

    int a = my_str_isalpha(str);
    cr_assert_eq(a, 0);
}

Test(test03, test03)
{
    char const str[7] = "";

    int a = my_str_isalpha(str);
    cr_assert_eq(a, 1);
}
