/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strcasecmp_test
*/

#include "linker.h"
#include <criterion/criterion.h>

Test(strcasecmp, basics)
{
    ext_link_t linker;
    char *hello2 = strdup("hello");
    char *hello = strdup("hello");

    init_linker(&linker);
    cr_assert_eq(0, linker.lnk_strcasecmp(hello, hello2));
    free(hello);
    free(hello2);
}
