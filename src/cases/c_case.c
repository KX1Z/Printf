/*
** EPITECH PROJECT, 2022
** c_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:27:38 04/11/2022
*/

#include <stdlib.h>

char *c_case(char c)
{
    char *output_ptr = malloc(sizeof(char) * 2);

    if (output_ptr == NULL)
        return (NULL);
    output_ptr[0] = c;
    output_ptr[1] = '\0';
    return (output_ptr);
}
