/*
** EPITECH PROJECT, 2022
** p_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:35:18 04/11/2022
*/

#include "my.h"

char *p_case(void const *p)
{
    char *output_ptr = malloc(sizeof(char) * 9);
    char const *hexa = "0123456789abcdef";

    if (output_ptr == NULL)
        return (NULL);
    for (int i = 0; i < 8; i++) {
        output_ptr[i] = hexa[((unsigned long)p >> (4 * (7 - i))) & 0xf];
    }
    output_ptr[8] = '\0';
    return (output_ptr);
}
