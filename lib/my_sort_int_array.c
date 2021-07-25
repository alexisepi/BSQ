/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort array in ascending order
*/

void my_sort_int_array(int *array, int size)
{
    int ch;
    int i = 0;

    while (i < size) {
        if (array[i] > array[(i + 1)]) {
            i++;
        } else if (array[i] < array[(i + 1)]) {
            ch = array[(i + 1)];
            array[(i + 1)] = array[i];
            array[i] = ch;
        }
    }
}