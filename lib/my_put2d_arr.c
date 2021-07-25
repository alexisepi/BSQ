/*
** EPITECH PROJECT, 2021
** my_put2d_arr
** File description:
** show 2d arr
*/
#include "my.h"
#include <stddef.h>

void my_put2d_arr(map_t grid)
{
    if (grid.map == NULL)
        return;
    for (int i = 1; i < grid.rows; ++i) {
        for (int y = 0; y < grid.cols; y++)
            my_printf("%c",grid.map[i][y]);
        my_printf("\n");
    }
}