/*
** EPITECH PROJECT, 2025
** isupper
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(ctest01, ctest01)
{
    char const str[6] = "ABCDE";

    int a = my_str_isupper(str);
    cr_assert_eq(a, 1);
}

Test(ctest02, ctest02)
{
    char const str[7] =	"aAlpha";

    int a = my_str_isupper(str);
    cr_assert_eq(a, 0);
}
