/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** recode my_printf
*/
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"
#include <stdio.h>

int my_flagfinder(char *flags, const char letter);

int my_printf( const char *format, ...)
{
    int i = 0;
    int flagnb = 0;
    void (*funcs[14]) (va_list *) = {my_s, my_supp, my_c, my_n, my_n, my_u,
        my_not, my_per, my_o, my_x, my_x, my_b, my_p};
    char flags[14] = {'s', 'S', 'c', 'd', 'i', 'u', 'n', '%', 'o', 'x', 'X',
        'b', 'p'};
    int ret = 0;

    if (format == NULL) {
        my_putstr("error invalid string");
        return -1;
    }
    va_list list;

    va_start(list, format);
    for (;format[i] != '\0'; i++) {
        if (format[i] == '%') {
            flagnb = my_flagfinder(flags, format[i + 1]);
            if (flagnb == -1) {
                my_putchar(format[i]);
                my_putchar(format[i + 1]);
            }
            else
                (*funcs[flagnb]) (&list);
            i++;
        }
        else {
            ret++;
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return ret;
}

int my_flagfinder(char *flags, const char letter)
{
    int nbflag = 0;
    int i = 0;

    for (;flags[i] != letter; i++) {
        nbflag++;
        if (i > my_strlen(flags)) {
            return -1;
        }
    }
    i = 0;
    return nbflag;
}