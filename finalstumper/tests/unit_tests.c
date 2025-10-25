/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** unit_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/rush.h"
#include <stdio.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}


Test(rush3, test1, .init = redirect_all_std)
{
    rush3("o--o\n|  |\n|  |\no--o\n");
    cr_assert_stdout_eq_str("[rush1-1] 4 4\n");
}

Test(rush3, test2, .init = redirect_all_std)
{
    rush3("/*\\\n* *\n\\*/\n");
    cr_assert_stdout_eq_str("[rush1-2] 3 3\n");
}

Test(rush3, test3, .init = redirect_all_std)
{
    rush3("B\n");
    cr_assert_stdout_eq_str("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
}

Test(rush3, test4, .init = redirect_all_std)
{
    rush3("ABBA\nB  B\nCBBC\n");
    cr_assert_stdout_eq_str("[rush1-3] 4 3\n");
}

Test(rush3, test5, .init = redirect_all_std)
{
    rush3("ABBC\nB  B\nABBC\n");
    cr_assert_stdout_eq_str("[rush1-4] 4 3\n");
}

Test(rush3, test6, .init = redirect_all_std)
{
    rush3("ABBC\nB  B\nCBBA\n");
    cr_assert_stdout_eq_str("[rush1-5] 4 3\n");
}
