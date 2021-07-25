/*
** EPITECH PROJECT, 2020
** strcat
** File description:
** concat 2 strings
*/
#include <stddef.h>
#include <stdlib.h>

int my_str_isprintable(char const *str);
int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
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

    for (i = 0; src[i] != '\0'; i++) {
        dest[(lendest + i)] = src[i];
    }
    dest[(lendest + i)] = '\0';
    return dest;
}
