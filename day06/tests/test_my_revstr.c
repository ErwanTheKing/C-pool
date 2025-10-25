/*
** EPITECH PROJECT, 2025
** test03
** File description:
** rev str
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(reverse_str, reverse)
{
    char str[] = "Hello";

    my_revstr(str);
    cr_assert_str_eq(str, "olleH");
}
