/*
** EPITECH PROJECT, 2020
** flags funcs
** File description:
** printf
*/

#include <stdarg.h>
#include "my.h"

void my_s(va_list *list)
{
    my_putstr(va_arg(*list, char *));
}

void my_c(va_list *list)
{
    my_putchar(va_arg(*list, int));
}

void my_n(va_list *list)
{
    my_putnbr_base(va_arg(*list, int), "0123456789");
}

void my_u(va_list *list)
{
    unsigned int n = va_arg(*list, unsigned int);
    unsigned int i = 1;

    while ((n/i) > 9)
        i *= 10;
    while (i > 0) {
        my_putchar('0' + (n/i) % 10);
        i /= 10;
    }
}

void my_not(va_list *list)
{
    return;
}
