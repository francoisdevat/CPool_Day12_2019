/*
** EPITECH PROJECT, 2019
** fonction qui calcule la puissance
** File description:
** si elle me calculait elle trouverai beaucoup de puissance
*/

int my_compute_power_it(int nb, int p)
{
    int  i;
    i = 1;
    int y;
    y = nb;

    if (p < 0) {
        return (0);
    }
    else if (p == 0) {
        return (1);
    }
    while (i <= p) {
        y  *= nb;
        i++;
    }
    return (nb);
}
