/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concat n char
*/
#include <stddef.h>
#include <stdio.h>

void my_putstr(char *str);
int my_str_isprintable(char const *str);
int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    if (dest == NULL || src == NULL) {
        dest = "error_null";
        return dest;
    }
    else if (src == "") {
        return dest;
    }
    int i = 0;
    int lendest = my_strlen(dest);

    for (;i != nb; i++)
        dest[(lendest + i)] = src[i];
    dest[(lendest + i)] = '\0';
    return dest;
}
