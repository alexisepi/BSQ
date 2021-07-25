/*
** EPITECH PROJECT, 2020
** putnbr base 
** File description:
** putnbr
*/
#include <stddef.h>
#include "my.h"

void my_putnbr_base(int n, char *base)
{
    int unit;
    int res;
    int baseid;

    baseid = my_strlen(base);
    if (n < 0) {
        my_putchar('-');
        n = -(n);
    }
    unit = 1;
    while ((n / unit) >= baseid)
        unit = unit * baseid;
    while (unit > 0) {
        res = (n / unit) % baseid;
        my_putchar(base[res]);
        unit = unit / baseid;
    }
}