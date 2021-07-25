/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** returns if string is numeric
*/
#include <stddef.h>

int comparenum(char const *str, int empty);
int my_strlen(char const *str);

int my_str_isnum(char const *str)
{
    int empty = my_strlen(str);

    if (str == NULL) {
        return 0;
    }
    else {
        empty = comparenum(str, empty);
    }
    if (empty == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int comparenum(char const *str, int empty)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] == ' ') {
            empty--;
        }
        else if (!(str[i] >= '0' && str[i] <= '9')) {
            return 1;
        }
        else {
            empty --;
        }
    }
    return empty;
}
