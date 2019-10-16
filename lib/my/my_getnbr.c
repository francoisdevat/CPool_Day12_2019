/*
** EPITECH PROJECT, 2019
** cpool
** File description:
** task05
*/

#include <unistd.h>

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int check_sign(char c, int isneg)
{
    if (c == '-')
        isneg = isneg * -1;
    return (isneg);
}

int update_nb(char c, int nb)
{
    int res = nb;
    
    res = res * 10;
    res = res + (c - '0');
    return (res);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int i = 0;
    int isneg = 1;

    while (str[i]) {
        isneg = check_sign(str[i], isneg);
        if (is_digit(str[i]) == 1) {
            while (is_digit(str[i]) == 1) {
                nb = update_nb(str[i], nb);
                i++;
            }
            if (nb < 0)
                return (0);
            return (nb * isneg);
        }
        i++;
    }
    return (nb * isneg);
}
