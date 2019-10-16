/*
** EPITECH PROJECT, 2019
** recursif de la puissance
** File description:
** je commence à fatiguer
*/

int my_compute_power_rec(int nb, int p)
{
    int i = nb;

    if (p == 0) {
        return (1);
    }
    else if (p < 0) {
        return (0);
    }
    return (i* my_compute_power_rec  (nb, p - 1));
}
