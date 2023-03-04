/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strncmp_test
*/

#include "linker.h"
#include <criterion/criterion.h>
#include <string.h>

Test(strncmp, zero)
{
    ext_link_t linker;
    char *hello2 = strdup("hellz");
    char *hello = strdup("helaa");

    init_linker(&linker);
    cr_assert(strncmp(hello, hello2, 0) == linker.lnk_strncmp(hello, hello2, 0));
    free(hello);
    free(hello2);
}


Test(strncmp, three)
{
    ext_link_t linker;
    char *hello2 = strdup("helab");
    char *hello = strdup("helcd");

    init_linker(&linker);
    cr_assert(strncmp(hello, hello2, 4) == linker.lnk_strncmp(hello, hello2, 4));
    free(hello);
    free(hello2);
}