/*
** EPITECH PROJECT, 2022
** f_from_g_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 11:58:36 05/11/2022
*/

#include "my.h"

static int nb_of_decimals_to_print(double nb, int total_turns)
{
    int nb_of_decimals = 0;

    for (int i = 1; i <= PRECISION - total_turns + 1; i++) {
        nb *= 10;
        if ((int)nb % 10 != 0)
            nb_of_decimals = i;
    }
    return (nb_of_decimals);
}

static void coding_style_two(char *output_ptr, int total_turns, double decimal)
{
    int units_size;

    output_ptr[total_turns++] = '.';
    units_size = nb_of_decimals_to_print(decimal, total_turns);
    for (int i = 0; i < units_size; i++) {
        decimal *= 10;
        output_ptr[total_turns++] = (char)((int)decimal % 10 + '0');
    }
    output_ptr[total_turns] = '\0';
}

static void coding_style_one(char *output_ptr, int *total_turns, double *value,
int units_size)
{
    while (*total_turns < units_size) {
        output_ptr[units_size - *total_turns - 1] = (char)((int)*value % 10
        + '0');
        *value /= 10;
        (*total_turns)++;
    }
}

char *f_from_g_case(double value)
{
    char *output_ptr = malloc(sizeof(char) * PRECISION + 3);
    double decimal = value - (unsigned int)value;
    int total_turns = 0;
    int units_size = my_get_nbr_size((int)value);

    if (output_ptr == NULL)
        return (NULL);
    if (value < 0) {
        output_ptr[0] = '-';
        value *= -1;
        decimal *= -1;
        total_turns++;
    }
    coding_style_one(output_ptr, &total_turns, &value, units_size);
    if (decimal == 0) {
        output_ptr[total_turns] = '\0';
        return (output_ptr);
    }
    coding_style_two(output_ptr, total_turns, decimal);
    return (output_ptr);
}
