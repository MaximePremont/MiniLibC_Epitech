/*
** EPITECH PROJECT, 2022
** MiniLibC
** File description:
** linker
*/

#ifndef LINKER_H
    #define LINKER_H

#include <stddef.h>

typedef struct ext_link_s {
    size_t (*lnk_strlen)(const char *s);
    char *(*lnk_strchr)(const char *s, int c);
    char *(*lnk_strrchr)(const char *s, int c);
    void *(*lnk_memset)(void *s, int c, size_t n);
    void *(*lnk_memcpy)(void *dest, const void *src, size_t n);
    int (*lnk_strcmp)(const char *s1, const char *s2);
    void *(*lnk_memmove)(void *dest, const void *src, size_t n);
    int (*lnk_strncmp)(const char *s1, const char *s2, size_t n);
    int (*lnk_strcasecmp)(const char *s1, const char *s2);
    char *(*lnk_strstr)(const char *haystack, const char *needle);
    char *(*lnk_strpbrk)(const char *s, const char *accept);
    size_t (*lnk_strcspn)(const char *s, const char *reject);
    int (*lnk_ffs)(int i);
    char *(*lnk_index)(const char *s, int c);
    char *(*lnk_rindex)(const char *s, int c);
    long (*lnk_syscall)(long number, ...);
    char (*lnk_strfry)(char *string);
} ext_link_t;

void init_linker(ext_link_t *linker);

#endif /* !LINKER_H */
