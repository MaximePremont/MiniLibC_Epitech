/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strcspn_test
*/

#include "linker.h"
#include <criterion/criterion.h>
#include <string.h>

Test(strcspn, basics)
{
    ext_link_t linker;
    char *hello = strdup("salut");
    char *hello2 = strdup("a");

    init_linker(&linker);
    cr_assert(strcspn(hello, hello2) == linker.lnk_strcspn(hello, hello2));
    free(hello);
    free(hello2);
}


Test(strcspn, not_found)
{
    ext_link_t linker;
    char *hello = strdup("salut");
    char *hello2 = strdup("");

    init_linker(&linker);
    cr_assert(strcspn(hello, hello2) == linker.lnk_strcspn(hello, hello2));
    free(hello);
    free(hello2);
}