/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap 2 variables value.
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int simb = *b;

    *b = *a;
    *a = simb;
}
