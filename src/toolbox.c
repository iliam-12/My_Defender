/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** toolbox
*/

#include "../include/defender.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) my_putchar(str[i++]);
}

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL) return (0);
    for (i = 0; str[i]; i++);
    return (i);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int cnt = i-1;

    while ((str[i] < 48 || str[i] > 57) && str[i] != '\0') i++;
    while (str[i] >= 48 && str[i] <= 57) {
        nb = nb * 10 + str[i] - 48;
        i++;
    } while (cnt >= 0 && (str[cnt] == '-' || str[cnt] == '+')) {
        if (str[cnt] == '-')
            nb = nb * -1;
        cnt--;
    } return (nb);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2)) return (84);
    while (s1[i] && s2[i]) {
        if (s1[i] == s2[i])
            i++;
        else
            return (84);
    } return (0);
}