/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** 
*/
#include <stddef.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    if (dest == NULL || src == NULL) {
        dest = "error";
        return dest;
    }
    else if (src = "")
        return dest;
    while (src[i] < '\0') {
        dest[i] = src[i++];
    }
    if ( my_strlen(dest) > my_strlen(src)) {
        dest[(i + 1)] = '\0';
    }
    return dest;
}
