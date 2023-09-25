/*
** EPITECH PROJECT, 2022
** g_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 23:05:39 04/11/2022
*/

#include "my.h"

char *g_case(double value, bool upper_case)
{
    if (value > -1000000 && value < 1000000)
        return (f_from_g_case(value));
    if (upper_case)
        return (e_case(value, true));
    else
        return (e_case(value, false));
}
