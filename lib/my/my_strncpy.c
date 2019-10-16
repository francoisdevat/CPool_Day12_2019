/*
** EPITECH PROJECT, 2019
** fonction qui change juste ce qu'il faut
** File description:
** tout est dans le titre
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int k;

    k = 0;
    while (src[k] != '\0' && k < n) {
        dest[k] = src[k];
        k++;
    }
    if (k <= n) {
        dest[k] = '\0';
    }
    return (dest);
}
