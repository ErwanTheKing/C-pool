/*
** EPITECH PROJECT, 2025
** strstr
** File description:
** strstr
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(tests, test)
{
    char str[30] = "BonjourHello test";
    char str2[30] = "BonjourHello test";
    char const find[6] = "Hello";

    my_strstr(str, find);
    strstr(str2, find);
    cr_assert_str_eq(str, str2);
}

Test(tests2, tests2)
{
    char str[6] = "Hello";
    char str2[6] = "Hello";
    char const rep[6] = "World";

    my_strstr(str, rep);
    strstr(str2, rep);
    cr_assert_str_eq(str, str2);
}
