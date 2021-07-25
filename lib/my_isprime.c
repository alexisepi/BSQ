/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** detects if param nb is prime
*/

int my_is_prime(int nb)
{
    if (nb == 2) {
        return (1);
    }
    else if ( nb % 2 == 0) {
        return (0);
    }
    else if (nb < 0) {
            return (84);
    }
    return (1);
}