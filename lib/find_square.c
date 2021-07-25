/*
** EPITECH PROJECT, 2021
** find_square
** File description:
** find_square
*/
#include "my.h"
#include <stddef.h>

square register_sq(square temp, square biggest)
{
    if (temp.size > biggest.size)
        return temp;
    else
        return biggest;
}

square dotor_circle(map_t grid, int row, int col)
{
    square sq;
    int ok = 1;
    int size = 1;

    if (grid.map[row][col] == 'o') {
        sq.size = -1;
        return sq;
    }

    while (ok != 0) {
        ok = is_square_of_size(grid, row, col, size);
        size++;
    }
    sq.size = size - 1;
    sq.row = row;
    sq.col = col;
    return sq;
}

square find_square(map_t grid)
{
    square biggest;
    square temp;
    
    biggest.col = 0;
    biggest.row = 0;
    biggest.size = 0;

    int y = 0;
    int i = 1;

    for (; i < grid.rows; i++) {
        for (; y < grid.cols; y++) {
            temp = dotor_circle(grid, i, y);

            if (temp.size != -1)
                biggest = register_sq(temp, biggest);
        }
        y = 0;
    }
    return biggest;
}