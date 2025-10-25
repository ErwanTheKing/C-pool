/*
** EPITECH PROJECT, 2025
** mini-printf
** File description:
** The test_units.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/bsprintf.h"
#include "../include/my.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(mini_printf, simple_string, . init=redirect_all_stdout)
{
    mini_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(mini_printf2, simple_string2, . init=redirect_all_stdout)
{
    char str[6];

    my_strcpy(str, "world");
    mini_printf("Hello %s\n", str);
    cr_assert_stdout_eq_str("Hello world\n");
}

Test(mini_printf3, simple_string3, . init=redirect_all_stdout)
{
    int nb = 21;

    mini_printf("If you multiple %d by %d, the result is %i.\n",
        nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.\n");
}

Test(mini_printf4, simple_string4, . init=redirect_all_stdout)
{
    char str[8];

    my_strcpy(str, "Epitech");
    mini_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str));
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters.\n");
}
