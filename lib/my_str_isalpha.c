/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** returns 1 if the string given is only alpha
*/
#include <stddef.h>

int my_strlen(char const *str);
int comparealpha(char const *str, int empty);

int my_str_isalpha(char const *str)
{
    int empty = my_strlen(str);

    if (str == NULL) {
        return 0;
    }
    else {
        empty = comparealpha(str, empty);

        if (empty == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int comparealpha(char const *str, int empty)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] == ' ') {
            empty--;
        }
        else if  (!((str[i] >= 'A' && str[i]  <= 'Z') ||
                    (str[i] >= 'a' && str[i] <= 'z'))) {
            return 1;
        }
        else {
            empty --;
        }
    }
    return empty;
}
