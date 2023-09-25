/*
** EPITECH PROJECT, 2022
** f_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 18:52:11 04/11/2022
*/

#include "my.h"

static unsigned int number_size(unsigned int nb)
{
    unsigned int size = 0;

    while (nb > 0) {
        nb /= 10;
        size++;
    }
    return (size);
}

char *f_case(double value)
{
    unsigned int size = number_size((unsigned int)value);
    double decimal = value - (unsigned int)value;
    char *output_ptr;

    output_ptr = malloc(sizeof(char) * (size + PRECISION + 2));
    if (output_ptr == NULL)
        return (NULL);
    for (unsigned int i = 0; i < size; i++) {
        output_ptr[size - i - 1] = (char)((unsigned int)value % 10 + '0');
        value /= 10;
    }
    output_ptr[size] = '.';
    for (unsigned int i = 0; i < PRECISION; i++) {
        decimal *= 10;
        output_ptr[size + i + 1] = (char)((unsigned int)decimal % 10 + '0');
    }
    if ((unsigned int)(decimal * 10) % 10 >= 5)
        output_ptr[size + PRECISION] += 1;
    output_ptr[size + PRECISION + 1] = '\0';
    return (output_ptr);
}
