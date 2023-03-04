/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strlen_test
*/

#include "linker.h"
#include <criterion/criterion.h>

Test(strlen, basics)
{
    ext_link_t linker;
    char *empty = "";
    char *hello = "hello";

    init_linker(&linker);
    cr_assert_eq(0, linker.lnk_strlen(empty));
    cr_assert_eq(5, linker.lnk_strlen(hello));
}
