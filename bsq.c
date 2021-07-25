/*
** EPITECH PROJECT, 2021
** main
** File description:
** test
*/
#include "include/my.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

int main(int ac, char const *av[])
{
    if (ac < 2) {
        write(2, "Usage: ./bsq filepath\n", 23);
        return 84;
    }
    map_t grid = load_2d_arr_from_file(av[1]);
    if (grid.map == NULL) {
        write(2, "Usage: ./bsq filepath\n", 23);
        return 84;
    }
    square biggest = find_square(grid);
    grid = replace_square(grid, biggest);
    my_put2d_arr(grid);
    free(grid.map);
    return 0;
}
