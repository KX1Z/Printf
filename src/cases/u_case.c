/*
** EPITECH PROJECT, 2022
** u_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:44:45 04/11/2022
*/

#include "my.h"

char *u_case(unsigned int nb)
{
    unsigned int nb_tmp = nb;
    char *output_ptr = NULL;
    int i = 0;

    while (nb_tmp > 0) {
        nb_tmp /= 10;
        i++;
    }
    output_ptr = malloc(sizeof(char) * (i + 1));
    if (output_ptr == NULL)
        return (NULL);
    output_ptr[i] = '\0';
    while (nb > 0) {
        output_ptr[i - 1] = (char)(nb % 10 + '0');
        nb /= 10;
        i--;
    }
    return (output_ptr);
}
