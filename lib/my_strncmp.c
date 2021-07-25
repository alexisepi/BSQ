/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** 
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int size = 0;
    int cts1 = 0;
    int cts2 = 0;

    if (s1 == NULL || s2 == NULL)
        return 84;
    else if (my_strlen(s1) < my_strlen(s2))
        size = my_strlen(s2);
    else if (my_strlen(s1) > my_strlen(s2))
            size = my_strlen(s1);
    for (int i = 0; i < size; i++) {
        cts1 += (char)s1[i];
        cts2 += (char)s2[i];
    }
    if (cts1 == cts2)
        return 0;
    else if (cts1 < cts2)
        return (-1);
    else if (cts1 > cts2)
            return 1;
}