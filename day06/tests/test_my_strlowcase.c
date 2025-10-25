/*
** EPITECH PROJECT, 2025
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(lowcasetest, lowcasetest)
{
    char str[7] = "ABcDEF";

    my_strlowcase(str);
    cr_assert_str_eq(str, "abcdef");
}
