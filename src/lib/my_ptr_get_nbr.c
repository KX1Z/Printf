/*
** EPITECH PROJECT, 2022
** my_ptr_get_nbr.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:19:31 04/11/2022
*/

unsigned int my_ptr_get_nbr(char const *str, int *i)
{
    unsigned int nb = 0;

    while (str[*i] >= '0' && str[*i] <= '9') {
        nb = nb * 10 + str[*i] - '0';
        (*i)++;
    }
    return (nb);
}
