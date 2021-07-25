/*
** EPITECH PROJECT, 2020
** my_find_prime
** File description:
** returns prime sup
*/
#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb == 2 || nb == 1 || nb == 0) {
        return 2;
    }
    else if (my_is_prime(nb) == 1) {
        return nb;
    }
    else if (my_is_prime(nb) == 0) {
            nb++;
            my_find_prime_sup(nb);
            return nb;
    }
    return 84;
}
