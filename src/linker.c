/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** linker
*/

#include <dlfcn.h>
#include <stddef.h>

#include "linker.h"
#include <stdio.h>

void init_linker(ext_link_t *linker)
{
    void *lib;

    lib = dlopen("./libasm.so", RTLD_LAZY);
    linker->lnk_strlen = dlsym(lib, "strlen");
    linker->lnk_strchr = dlsym(lib, "strchr");
    linker->lnk_strrchr = dlsym(lib, "strrchr");
    linker->lnk_memset = dlsym(lib, "memset");
    linker->lnk_memcpy = dlsym(lib, "memcpy");
    linker->lnk_strcmp = dlsym(lib, "strcmp");
    linker->lnk_memmove = dlsym(lib, "memmove");
    linker->lnk_strncmp = dlsym(lib, "strncmp");
    linker->lnk_strcasecmp = dlsym(lib, "strcasecmp");
    linker->lnk_strstr = dlsym(lib, "strstr");
    linker->lnk_strpbrk = dlsym(lib, "strpbrk");
    linker->lnk_strcspn = dlsym(lib, "strcspn");
    linker->lnk_ffs = dlsym(lib, "ffs");
    linker->lnk_index = dlsym(lib, "index");
    linker->lnk_rindex = dlsym(lib, "rindex");
    linker->lnk_syscall = dlsym(lib, "syscall");
    linker->lnk_strfry= dlsym(lib, "strfry");
}