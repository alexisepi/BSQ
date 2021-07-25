/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** displays if nb is neg
*/
#include <stddef.h>

void my_putstr(char *str);

int my_isneg(int n)
{
    if ( n < 0) {
        my_putstr("N");
    }
    else if ( n >= 0) {
        my_putstr("P");
    }
    else {
        my_putstr("null");
    }
}
