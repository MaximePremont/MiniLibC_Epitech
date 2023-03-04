/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** memset_test
*/

#include "linker.h"

#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>

Test(memset, basics)
{
    ext_link_t linker;
    char *hello = strdup("hello");

    init_linker(&linker);
    linker.lnk_memset(hello, 'a', 3);
    cr_assert_str_eq(hello, "aaalo");
    free(hello);
}
