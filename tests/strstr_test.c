/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strncmp_test
*/

#include "linker.h"
#include <criterion/criterion.h>
#include <string.h>

Test(strstr, basics)
{
    ext_link_t linker;
    char *hello2 = strdup("et");
    char *hello = strdup("heyteto");

    init_linker(&linker);
    cr_assert(strstr(hello, hello2) == linker.lnk_strstr(hello, hello2));
    free(hello);
    free(hello2);
}
