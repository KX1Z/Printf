/*
** EPITECH PROJECT, 2022
** d_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:41:32 04/11/2022
*/

#include "my.h"

static char *coding_style(int size, int value)
{
    int place = 0;
    char *output_ptr = malloc(sizeof(char) * (size + 1));

    if (output_ptr == NULL)
        return (NULL);
    output_ptr[size] = '\0';
    if (value < 0) {
        output_ptr[place++] = '-';
        value = -value;
    }
    for (int i = size - 1; i >= place; i--) {
        output_ptr[i] = (char)(value % 10 + '0');
        value /= 10;
    }
    return (output_ptr);
}

char *d_case(int value)
{
    int size = 0;
    int nb = value;

    if (value < 0) {
        nb = -value;
        size++;
    }
    while (nb > 0) {
        nb /= 10;
        size++;
    }
    return (coding_style(size, value));
}
