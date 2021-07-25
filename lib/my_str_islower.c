/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** returns true if string is only lowercase
*/
#include <stddef.h>

int my_strlen(char const *str);
int comparelower(char const *str, int empty);

int my_str_islower(char const *str)
{
    int empty = my_strlen(str);
    if (str == NULL) {
        return 0;
    }
    else {
        empty = comparelower(str, empty);
    }
    if (empty == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int comparelower(char const *str, int empty)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] == ' ') {
            empty--;
        }
        else if  (!(str[i] >= 'a' && str[i] <= 'z')) {
            return empty;
        }
        else {
            empty --;
        }
    }
    return empty;
}