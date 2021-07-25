/*
** EPITECH PROJECT, 2021
** load file in mem
** File description:
** load_file_in_mem
*/
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *load_file_in_mem(char const *filepath)
{
    struct stat *info = malloc(sizeof(struct stat));
    int fd = open(filepath, O_RDONLY, S_IRWXU);

    if (fd == -1)
        return NULL;
    stat(filepath, info);
    int size = info->st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    read(fd, buffer, size);
    close(fd);
    return buffer;
}
