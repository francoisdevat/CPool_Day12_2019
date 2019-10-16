/*
** EPITECH PROJECT, 2019
** toujours plus vite
** File description:
** nothing can stop me
*/

char *my_strupcase(char *str)
{
    int k;

    k = 0;
    while (str[k] != '\0') {
        if (str[k] >= 'a' && str[k] <= 'z') {
            str[k] = str[k] - 32;
        }
        k++;
    }
    return (str);
}
