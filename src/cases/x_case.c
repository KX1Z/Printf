/*
** EPITECH PROJECT, 2022
** x_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 18:50:19 04/11/2022
*/

#include "my.h"

static unsigned int hexa_size(unsigned int nb)
{
    unsigned int size = 0;

    while (nb > 0) {
        nb /= 16;
        size++;
    }
    return (size);
}

char *x_case(unsigned int nb, bool upper_case)
{
    char *output_ptr = NULL;
    unsigned int size = hexa_size(nb);
    char const *hexa[2] = {"0123456789abcdef", "0123456789ABCDEF"};

    output_ptr = malloc(sizeof(char) * (size + 1));
    if (output_ptr == NULL)
        return (NULL);
    for (unsigned int i = 0; i < size; i++) {
        if (upper_case)
            output_ptr[size - i - 1] = hexa[1][(nb % 16)];
        else
            output_ptr[size - i - 1] = hexa[0][(nb % 16)];
        nb /= 16;
    }
    output_ptr[size] = '\0';
    return (output_ptr);
}
