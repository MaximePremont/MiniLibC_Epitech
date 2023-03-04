/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strpbrk_test
*/

#include "linker.h"
#include <criterion/criterion.h>
#include <string.h>

Test(strpbrk, basics)
{
    ext_link_t linker;
    char *hello = strdup("abcdefg");
    char *hello2 = strdup("zkdw");

    init_linker(&linker);
    cr_assert(strpbrk(hello, hello2) == linker.lnk_strpbrk(hello, hello2));
    free(hello);
    free(hello2);
}
