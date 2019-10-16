/*
** EPITECH PROJECT, 2019
** header
** File description:
** derder
*/

#include <stdlib.h>

int test_char(char const *str, int i)
{
    int test;

    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
        test = 1;
    else if (str[i] >= '0' && str[i] <= '9')
        test = 1;
    else
        test = 0;
    return (test);
}

int test_next(char const *str, int i)
{
    while (str[i] && test_char(str, i) == 0) {
        i++;
    }
    return (i);
}

int str_len_malloc(char const *str, int i)
{
    while (str[i] && test_char(str, i) == 1) {
        i++;
    }
    return (--i);
}

char **my_str_to_word_array(char const *str)
{
    char **mem = malloc(sizeof(char *) * my_strlen(str) + 1);
    int i = 0;
    int j = 0;
    int k = 0;

    mem[0] = malloc(sizeof(char) * str_len_malloc(str, i) + 1);
    while (str[i] != '\0') {
        if (test_char(str, i) == 0) {
            i = test_next(str, i);
            mem[j + 1] = malloc(sizeof(char) * str_len_malloc(str, i) + 1);
            j++;
            k = 0;
        }
        mem[j][k] = str[i];
        i++;
        k++;
    }
    mem[j + 1] = '\0';
    return (mem);
}
