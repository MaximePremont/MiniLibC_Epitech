/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** memmove_test
*/

#include "linker.h"

#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>

Test(memmove, basics)
{
    ext_link_t linker;
    char *hello = strdup("salut");

    init_linker(&linker);
    linker.lnk_memmove(hello + 3, hello, 4);
    //memmove(hello, aa, 2);
    cr_assert_str_eq(hello, "salsalu");
    free(hello);
}