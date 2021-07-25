/*
** EPITECH PROJECT, 2021
** load_2d_arr_from_file
** File description:
** load_2d_arr_from_file
*/
#include "my.h"
#include <stddef.h>

char *load_file_in_mem(char const *filepath);

char **mem_alloc_2d_array(int nb_rows, int nb_cols);

int find_rows(char *buffer)
{
    int rows = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            rows++;
    return rows;
}

int find_cols(char *buffer)
{
    char cols[15];
    int i = 0;

    for (int i = 0; buffer[i] != 'o' && buffer[i] != '.'; i++)
        cols[i] = buffer[i];
    return my_getnbr(cols);
}

map_t load_2d_arr_from_file(char const *filepath)
{
    int a = 0;
    int b = 0;
    char *buffer = load_file_in_mem(filepath);
    map_t grid;

    if (buffer == NULL) {
        grid.map = NULL;
        return grid;
    } grid.rows = find_rows(buffer);
    grid.cols = find_cols(buffer);
    grid.map = mem_alloc_2d_array(grid.cols, grid.rows + 1);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n') {
            i ++;
            b ++;
            a = 0;
        }grid.map[b][a] = buffer[i];
        a ++;
    }
    free(buffer);
    return grid;
}
