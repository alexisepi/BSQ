/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** cpy n parts of string
*/
#include <stddef.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    if (dest == NULL || src == NULL) {
        dest = "error";
        return dest;
    }
    else {
        while ( i < n) {
            dest[i] = src[i];
            i++;
        }
        if ( n > my_strlen(src)) {
            dest[( i + 1)] = '\0';
        }
    }
    return dest;
}