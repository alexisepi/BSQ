/*
** EPITECH PROJECT, 2020
** flags funcs
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void my_supp(va_list *list)
{
    char *src = va_arg(*list, char *);
    for (int i = 0; i != my_strlen(src); i++) {
        if (src[i] < (char)32 || src[i] >= (char)127) {
            my_putchar('\\');
            my_putchar('0');
            int n = (int)src[i];
            my_putnbr_base(n, "01234567");
        }
        else
            my_putchar(src[i]);
    }
}