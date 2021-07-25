/*
** EPITECH PROJECT, 2020
** flags funcs
** File description:
** printf
*/

#include <stdarg.h>
#include "my.h"

void my_per(va_list *list)
{
    my_putchar('%');
}

void my_o(va_list *list)
{
    my_uputnbr_base(va_arg(*list, unsigned int), "01234567");
}

void my_x(va_list *list)
{
    my_uputnbr_base(va_arg(*list, unsigned int), "123456789ABCDEF");
}

void my_b(va_list *list)
{
    my_putnbr_base(va_arg(*list, int), "01");
}

void my_p(va_list *list)
{
    my_uputnbr_base(va_arg(*list, unsigned int), "12356789ABCDEF");
}