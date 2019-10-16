/*
** EPITECH PROJECT, 2019
** fonction qui compte le nombbre de caractere
** File description:
** c'est bon je commence à m'en sortir
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

