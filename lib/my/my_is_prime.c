/*
** EPITECH PROJECT, 2019
** fonction qui dit si c'estun nombre premier
** File description:
** je sais pas
*/

int my_is_prime(int nb)
{
    int i;
    if  (nb == 2) {
        return (1);
    }
    if (nb <= 1) {
        return (0);
    }
    for (i = 2 ; i <= 5 && nb%i != 0 ; i++)
    if (i = 6 && nb%5 != 0) {
        return (1);
    }
    return (0);
}
