/*
** EPITECH PROJECT, 2020
** my_putbr.c
** File description:
** display entered nbr.
*/
#include<unistd.h>

void my_putchar(char c);

int my_putnbr(int n)
{
    int i = 1;

    if (n < 0) {
        n = -n;
        my_putchar('-');
    } while ((n/i) > 9) {
        i *= 10;
    } while (i > 0) {
        my_putchar('0' + (n/i) % 10);
        i /= 10;
    }
    return (0);
}