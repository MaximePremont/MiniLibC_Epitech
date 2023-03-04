/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** ffs_test
*/

#include "linker.h"
#include <criterion/criterion.h>

Test(ffs, basics)
{
    ext_link_t linker;

    init_linker(&linker);
    cr_assert_eq(ffs(4), linker.lnk_ffs(4));
}
