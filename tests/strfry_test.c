/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** strfry_test
*/

#include "linker.h"
#include <stdio.h>
#include <criterion/criterion.h>

Test(strfry, basics)
{
    ext_link_t linker;
    char *hello = strdup("Hello world");

    init_linker(&linker);
    //syscall(SYS_write, 1, hello, 12);
    linker.lnk_strfry(hello);
    //printf("%s\n", hello);
    free(hello);
}
