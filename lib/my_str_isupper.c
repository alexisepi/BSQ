/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** returns true if string is only uppercase
*/
#include <stddef.h>
int compareupper(char const *str, int empty);
int my_strlen(char const *str);

int my_str_isupper(char const *str)
{
    int empty = my_strlen(str);

    if (str == NULL) {
        return 0;
    }
    else {
        empty = compareupper(str, empty);
    }
    if (empty == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int compareupper(char const *str, int empty)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] == ' ') {
            empty--;
        }
        else if  (!(str[i] >= 'A' && str[i]  <= 'Z')) {
            return empty;
        }
        else {
            empty --;
        }
    }
    return empty;
}
