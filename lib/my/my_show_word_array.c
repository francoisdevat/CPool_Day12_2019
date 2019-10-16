/*
** EPITECH PROJECT, 2019
** lol
** File description:
** lolol
*/

#include "stdlib.h"

int my_putstr(char const *str);

void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
