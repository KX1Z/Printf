/*
** EPITECH PROJECT, 2022
** e_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 22:20:56 04/11/2022
*/

#include "my.h"

static void coding_style(int exponent, char *output_ptr, int i,
bool upper_case)
{
    output_ptr[i++] = upper_case ? 'E' : 'e';
    if (exponent < 0) {
        output_ptr[i++] = '-';
        exponent *= -1;
    } else
        output_ptr[i++] = '+';
    output_ptr[i++] = (char)(exponent / 10 + '0');
    output_ptr[i++] = (char)(exponent % 10 + '0');
    output_ptr[i] = '\0';
}

static int get_exponent(double *nb)
{
    int exponent = 0;
    bool is_neg = false;

    if (*nb < 0) {
        is_neg = true;
        *nb *= -1;
    }
    while (*nb >= 10) {
        *nb /= 10;
        exponent++;
    }
    while (*nb < 1) {
        *nb *= 10;
        exponent--;
    }
    if (is_neg)
        *nb *= -1;
    return (exponent);
}

char *e_case(double nb, bool upper_case)
{
    char *output_ptr = malloc(sizeof(char) * 14);
    int exponent = get_exponent(&nb);
    int i = 0;

    if (output_ptr == NULL)
        return (NULL);
    if (nb < 0) {
        output_ptr[i] = '-';
        i++;
        nb *= -1;
    }
    output_ptr[i++] = (char)((int)nb + '0');
    output_ptr[i++] = '.';
    nb -= (int)nb;
    for (int j = 0; j < 6; j++) {
        nb *= 10;
        output_ptr[i++] = (char)((int)nb + '0');
        nb -= (int)nb;
    } coding_style(exponent, output_ptr, i, upper_case);
    return (output_ptr);
}
