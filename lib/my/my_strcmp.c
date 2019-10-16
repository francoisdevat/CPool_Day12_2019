/*
** EPITECH PROJECT, 2019
** coucou
** File description:
** jsuis obligé
*/

int my_strcmp(char const *s1, char const *s2)
{
    int k = 0;

    while (s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0') {
        k++;
    }
    if (s1[k] < s2[k]) {
        return (-1);
    }

    else if (s1[k] > s2[k]) {
        return (1);
    }
    return (0);
}

