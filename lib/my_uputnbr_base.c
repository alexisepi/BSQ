/*
** EPITECH PROJECT, 2020
** unsigned
** File description:
** base
*/
#include "my.h"

void my_uputnbr_base(unsigned int n, char *base)
{
    unsigned int unit;
    unsigned int res;
    unsigned int baseid;

    baseid = my_strlen(base);
    unit = 1;
    while ((n / unit) >= baseid)
        unit = unit * baseid;
    while (unit > 0) {
        res = (n / unit) % baseid;
        my_putchar(base[res]);
        unit = unit / baseid;
    }
}
