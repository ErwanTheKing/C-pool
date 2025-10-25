/*
** EPITECH PROJECT, 2025
** test
** File description:
** test
*/

#include "../cat/proto.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_cat, my_cat, .init=redirect_all_stdout)
{
    int ac = 3;
    char *av[4] = {"./cat", "test1", "test2", NULL};

    my_cat(ac, av);
    cr_assert_stdout_eq_str("Coucou je suis chauve\nJ'aime la raclette\n");
}

Test(my_cat2, my_cat2, .init=redirect_all_stdout)
{
    int ac = 2;
    char *av[3] = {"./cat", "test", NULL};

    my_cat(ac, av);
    cr_assert_stderr_eq_str("Error with open\n");
}
