/*
** EPITECH PROJECT, 2025
** isnum
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(atest01, atest01)
{
    char const str[6] = "12545";

    int a = my_str_isnum(str);
    cr_assert_eq(a, 1);
}

Test(atest02, atest02)
{
    char const str[7] =	"0Alpha";

    int a = my_str_isnum(str);
    cr_assert_eq(a, 0);
}
