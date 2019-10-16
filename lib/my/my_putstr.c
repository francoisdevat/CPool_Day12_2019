/*
** EPITECH PROJECT, 2019
** fonction de contage
** File description:
** je comprend rien aux strings
*/

void my_putcahr(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (1);
}
