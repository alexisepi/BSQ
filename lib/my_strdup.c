/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** duplicates a string
*/
#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *str)
{
    char *dest;
    char *err = "";
    int i = 0;

    if (str == NULL) {
        return err;
    }
    else if (str == "")
        return err;
    dest = malloc(sizeof(char)*(my_strlen(str) + 1));
    for (i = 0; str[i] != '\0'; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return dest;
}