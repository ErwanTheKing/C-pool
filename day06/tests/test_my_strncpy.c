/*
** EPITECH PROJECT, 2025
** test02
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(test02, test)
{
    char dest[6] = {0};
    char dest_2[6] = {0};
    char const *src = "Hello";

    my_strncpy(dest, src, 3);
    strncpy(dest_2, src, 3);
    cr_assert_str_eq(dest, dest_2);
}

Test(Tests2, tests2)
{
    char dest[20] = "World";
    char dest_2[20] = "World";
    char const *src = "Hello";

    my_strncpy(dest, src, 20);
    strncpy(dest_2, src, 20);
    cr_assert_str_eq(dest, dest_2);
}
