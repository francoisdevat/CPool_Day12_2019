/*
** EPITECH PROJECT, 2019
** header
** File description:
** pour le header
*/

char *my_strcapitalize(char *str)

{
    for (int k = 1;str[k] != '\0';k++) {
        if (str[k] >= 'A' && str[k] <= 'Z')
        {
            if (str[k - 1] != ' ')
                str[k] = str[k] + 32;
        }
        if (str[k] >= 'a' && str[k] <= 'z')
        {
            if (str[k - 1] == ' ')
                str[k] = str[k] - 32;
        }
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] + ('A' - 'a');
    return (str);
}
