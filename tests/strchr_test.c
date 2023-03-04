/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strchr_test
*/

#include "linker.h"
#include <criterion/criterion.h>

Test(strchr, basics)
{
    ext_link_t linker;
    char *empty = "";
    char *hello = "hello";

    init_linker(&linker);
    cr_assert_str_eq("llo", linker.lnk_strchr(hello, 'l'));
    cr_assert_eq(NULL, linker.lnk_strchr(hello, 'z'));
    cr_assert_eq(NULL, linker.lnk_strchr(empty, 'z'));
}
