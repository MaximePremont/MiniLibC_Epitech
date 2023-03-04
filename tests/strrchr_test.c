/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strrchr_test
*/

#include "linker.h"

#include <criterion/criterion.h>
#include <string.h>
#include <stdio.h>

Test(strrchr, basics)
{
    ext_link_t linker;
    char *empty = "";
    char *hello = "hello";

    init_linker(&linker);
    cr_assert(strrchr(hello, 'l') == linker.lnk_strrchr(hello, 'l'));
    cr_assert_eq(NULL, linker.lnk_strrchr(hello, 'z'));
    cr_assert_eq(NULL, linker.lnk_strrchr(empty, 'z'));
}
