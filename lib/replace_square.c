/*
** EPITECH PROJECT, 2021
** replace square
** File description:
** replace_square
*/
#include "my.h"
#include <stddef.h>

map_t replace_square(map_t grid, square biggest)
{
    int i = biggest.row;
    int j = biggest.col;

    biggest.size -= 1;
    while (i != biggest.row + biggest.size - 1) {
        while (j != biggest.col + biggest.size - 1) {
            grid.map[i][j] = 'x';
            j++;
        }
        j = biggest.col;
        i++;
    }
    return grid;
}
