/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** returns true if string is printable
*/
#include <stddef.h>
#include "my.h"

int display(char const *str);

int my_str_isprintable(char const *str)
{
    int ret = 0;
    if (str == NULL) {
        return 0;
    }
    else {
        ret = display(str);
    }
    return ret;
}

int display(char const *str)
{
    for (int i = 0;str[i] != '\0';i++) {
        if (!(str[i] >= ' '  && str[i]  <= '~')) {
            my_printf("\n str[%d] = %c\n",i,str[i]);
            return 0;
        }
    }
    return 1;
}