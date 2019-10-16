/*
** EPITECH PROJECT, 2019
** lis le string en mode manga
** File description:
** sisisi
*/

char *my_revstr(char *str)
{
    int i = 0;
    int stringtall = 0;
    char g;
    int j = 0;

    while (str[i] != '\0') {
        i++;
        stringtall++;
    }
    int middle = stringtall/2;
    while (j < middle) {

        g = str[j];
        str[j] = str[stringtall-1];
        str[stringtall-1] = g;
        stringtall--;
        j++;
    }
    return (str);
}
