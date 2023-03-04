/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** index_test
*/

#include "linker.h"
#include <criterion/criterion.h>
#include <strings.h>

Test(index, basics)
{
    ext_link_t linker;
    char *hello = "hello";

    init_linker(&linker);
    cr_assert_eq(index(hello, 'e'), linker.lnk_index(hello, 'e'));
}
