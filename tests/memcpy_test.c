/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** memcpy_test
*/

#include "linker.h"

#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>

Test(memcpy, basics)
{
    ext_link_t linker;
    char *aa = strdup("aaa");
    char *hello = strdup("hello");

    init_linker(&linker);
    linker.lnk_memcpy(hello, aa, 2);
    cr_assert_str_eq(hello, "aallo");
    free(hello);
    free(aa);
}
