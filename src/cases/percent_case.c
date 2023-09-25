/*
** EPITECH PROJECT, 2022
** percent_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:35:54 04/11/2022
*/

#include <stdlib.h>

char *percent_case(void)
{
    char *output_ptr = malloc(sizeof(char) * 2);

    if (output_ptr == NULL)
        return (NULL);
    output_ptr[0] = '%';
    output_ptr[1] = '\0';
    return (output_ptr);
}
