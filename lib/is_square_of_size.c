/*
** EPITECH PROJECT, 2021
** is_square_of_size
** File description:
** is_square_of_size
*/
#include "my.h"

int is_square_of_size(map_t grid, int row, int col, int size)
{
    if (size == 1 && grid.map[row][col] == '.')
        return 1;
    int i = row;
    int y = col;

    while (i != row + size - 1) {
        if (i > grid.rows || y > grid.cols)
            return 0;
        while (y != col + size - 1) {
            if (grid.map[i][y] != '.')
                return 0;
            y++;
        }
        y = col;
        i++;
    }
    return 1;
}