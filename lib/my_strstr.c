/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** my_strstr
*/
#include <stddef.h>

int my_strlen(char const *str);

int my_finder(char *str, char const *to_find, int result);

int split( int i, char *str, char const *to_find, int result);

char *my_strstr(char *str, char const *to_find)
{
    int result = my_strlen(to_find);
    char *error = "error,invalid string";

    if (str == NULL || to_find == NULL)
        return error;
    else {
        result = my_finder(str, to_find, result);
    }
    if (result == 0)
        return to_find;
}

int my_finder(char *str, char const *to_find, int result)
{
    int a;
    for (int i = 0; str[i] != '\0'; i++) {
        result = split( i, str, to_find, result);
    }
    return result;
}

int split( int i, char *str, char const *to_find, int result)
{
    int a = 0;
    for (a = 0; to_find[a] != '\0'; a++) {
        if (str[i] == to_find[a])
            result--;
    }
    return result;
}