/*
** EPITECH PROJECT, 2019
** fonction qui remplace
** File description:
** ça remmmmmmmmplace !!
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
