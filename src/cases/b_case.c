/*
** EPITECH PROJECT, 2022
** b_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 18:44:18 04/11/2022
*/

#include "my.h"

static unsigned int binary_size(unsigned int nb)
{
    unsigned int size = 0;

    while (nb > 0) {
        nb /= 2;
        size++;
    }
    return (size);
}

char *b_case(unsigned int nb)
{
    char *output_ptr = NULL;
    unsigned int size = binary_size(nb);

    output_ptr = malloc(sizeof(char) * (size + 1));
    if (output_ptr == NULL)
        return (NULL);
    for (unsigned int i = 0; i < size; i++) {
        output_ptr[size - i - 1] = (char)((nb % 2) + '0');
        nb /= 2;
    }
    output_ptr[size] = '\0';
    return (output_ptr);
}
