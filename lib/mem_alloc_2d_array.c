/*
** EPITECH PROJECT, 2020
** mem alloc 2d array
** File description:
** bsbsq
*/
#include <stdlib.h>

char **mem_alloc_2d_array(int letter, int strings)
{
    int i = 0;
    char **arr;

    arr = malloc(sizeof(*arr)*strings + 1);
    for (i = 0; i < strings; i++) {
        arr[i] = malloc(sizeof(**arr)*letter);
    }
    arr[strings] = NULL;
    return arr;
}
