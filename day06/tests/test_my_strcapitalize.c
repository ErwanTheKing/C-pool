/*
** EPITECH PROJECT, 2025
** strcapitalize
** File description:
** capitalize
*/

#include <criterion/criterion.h>
#include "../../day07/lib/include/libmy.h"

Test(capitalize, capitalize)
{
    char str[50] = "hey, how are you? 42WORds forty-two; fifty+one";
    char rep[50] = "Hey, How Are You? 42words Forty-Two; Fifty+One";

    my_strcapitalize(str);
    cr_assert_str_eq(str, rep);
}
