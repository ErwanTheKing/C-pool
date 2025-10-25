/*
** EPITECH PROJECT, 2025
** str_upcase
** File description:
** upcase
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(upcasetest, upcasetest)
{
    char str[7] = "abCdef";

    my_strupcase(str);
    cr_assert_str_eq(str, "ABCDEF");
}
