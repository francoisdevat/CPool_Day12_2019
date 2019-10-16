/*
** EPITECH PROJECT, 2019
** factoriel
** File description:
** fonction pour task02
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 1 || nb == 0) {
        return (1);
    }
    else if (nb > 12 || nb < 0) {
        return (0);
    }
    return (nb * my_compute_factorial_rec(nb - 1));
}

