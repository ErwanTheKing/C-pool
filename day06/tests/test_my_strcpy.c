/*
** EPITECH PROJECT, 2025
** test01
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(strcopy, copy)
{
    char dest[6] = {0};
    char dest_2[6] = {0};
    const char *src = "";

    my_strcpy(dest, src);
    strcpy(dest_2, src);
    cr_assert_str_eq(dest, dest_2);
}

Test(strcopy, copy2)
{
    char dest[6] = {0};
    char dest_2[6] = {0};
    const char *src = "Hello";

    my_strcpy(dest, src);
    strcpy(dest_2, src);
    cr_assert_str_eq(dest, dest_2);
}
