/*
** EPITECH PROJECT, 2025
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../lib/include/libmy.h"

Test(nessaie, nessaie)
{
    char dest[20] = "Hello";
    char dest2[20] = "Hello";
    char const src[20] = "WorldOFPH";

    my_strncat(dest, src, 5);
    strncat(dest2, src, 5);
    cr_assert_str_eq(dest, dest2);
}
