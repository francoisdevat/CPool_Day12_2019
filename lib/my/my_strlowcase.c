/*
** EPITECH PROJECT, 2019
** vite
** File description:
** vitevitevite
*/

char *my_strlowcase(char *str)
{
    int k = 0;

    while (str[k] != '\0') {
        if (str[k] >= 'A' && str[k] <= 'Z') {
            str[k] = str[k] + 32;
        }
        k++;
    }
    return (str);
}
