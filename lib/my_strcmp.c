/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** cmp
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int size = 0;

    if (s1 == NULL || s2 == NULL)
        return 84;
    else if (my_strlen(s1) < my_strlen(s2))
        return (-1);
    if (my_strlen(s1) == my_strlen(s2))
        return 0;
    else if (my_strlen(s1) > my_strlen(s2))
        return 1;
}