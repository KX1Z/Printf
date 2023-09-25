/*
** EPITECH PROJECT, 2022
** o_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:42:59 04/11/2022
*/

#include "my.h"

char *o_case(unsigned int value)
{
    unsigned int value_tmp = value;
    char *output_ptr = NULL;
    int i = 0;

    while (value_tmp > 0) {
        value_tmp /= 8;
        i++;
    }
    output_ptr = malloc(sizeof(char) * (i + 1));
    if (output_ptr == NULL)
        return (NULL);
    output_ptr[i] = '\0';
    while (value > 0) {
        output_ptr[i - 1] = (char)(value % 8 + '0');
        value /= 8;
        i--;
    }
    return (output_ptr);
}
