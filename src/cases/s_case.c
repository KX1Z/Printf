/*
** EPITECH PROJECT, 2022
** s_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:33:21 04/11/2022
*/

#include "my.h"

char *s_case(char *str)
{
    char *output_ptr = NULL;
    int i = 0;

    if (str == NULL)
        return (NULL);
    output_ptr = malloc(sizeof(char) * (my_strlen(str) + 1));
    if (output_ptr == NULL)
        return (NULL);
    while (str[i] != '\0') {
        output_ptr[i] = str[i];
        i++;
    }
    output_ptr[i] = '\0';
    return (output_ptr);
}
