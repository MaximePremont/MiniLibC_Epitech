/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** rindex_test
*/

#include "linker.h"

#include <criterion/criterion.h>
#include <string.h>
#include <stdio.h>

Test(rindex, basics)
{
    ext_link_t linker;
    char *empty = "";
    char *hello = "hello";

    init_linker(&linker);
    cr_assert(rindex(hello, 'l') == linker.lnk_rindex(hello, 'l'));
    cr_assert_eq(NULL, linker.lnk_rindex(hello, 'z'));
    cr_assert_eq(NULL, linker.lnk_rindex(empty, 'z'));
}
