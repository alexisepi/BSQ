/*
** EPITECH PROJECT, 2020
** Project Name
** File description:
** split string
*/
#include <stddef.h>
#include <stdlib.h>
#include "my.h"

int is_alpha(char word)
{
    if (word >= '!' && word <= '~')
        return 1;
    else
        return 0;
}

char **split_string(char const *str)
{
    int word = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            word++;
    }
    char **res = mem_alloc_2d_array(my_strlen(str)+1, word+1);
    int a = 0;
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            res[a][b] = '\0';
            b = 0;
            a++;
        }
        res[a][b] = str[i];
        b++;
    }
    res[a][b] = '\0';
    return res;
}