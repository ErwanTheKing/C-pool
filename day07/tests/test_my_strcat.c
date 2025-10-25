/*
** EPITECH PROJECT, 2025
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../lib/include/libmy.h"

Test(essaie, essaie)
{
    char dest[20] = "Hello";
    char dest2[20] = "Hello";
    char const src[20] = "World";

    my_strcat(dest, src);
    strcat(dest2, src);
    cr_assert_str_eq(dest, dest2);
}
