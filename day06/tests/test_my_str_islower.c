/*
** EPITECH PROJECT, 2025
** islower
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(btest01, btest01)
{
    char const str[6] = "ahdef";

    int a = my_str_islower(str);
    cr_assert_eq(a, 1);
}

Test(btest02, btest02)
{
    char const str[7] =	"aAlpha";

    int a = my_str_islower(str);
    cr_assert_eq(a, 0);
}
