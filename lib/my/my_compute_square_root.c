/*
** EPITECH PROJECT, 2019
** fonction pour calculer la racine carré
** File description:
** cette fois je vais y arriver easy
*/

int my_compute_square_root(int nb)
{
    int i;
    i = 1;

    if (nb <= 0) {
        return (0);
    }
    while (i * i < nb) {
        i++;
    }
    if (i * i != nb) {
        return (0);
    }
    return (i);
}
