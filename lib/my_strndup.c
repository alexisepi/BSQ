/*
** EPITECH PROJECT, 2020
** my_strndu
** File description:
** duplicates n char of a string
*/
#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strndup(char const *str, int n)
{
    char *dest;
    int i = 0;

    if (str == NULL) {
        dest = "error";
        return dest;
    }
    dest = malloc(sizeof(char)*(my_strlen(str) + 1));
    if (str == "") {
        dest = "";
        return dest;
        }
    for (i = 0; i != n; i++) {
        dest[i] = str[i];
    }
    dest[i] = '\0';
    return dest;
}
