/*
** EPITECH PROJECT, 2022
** my_get_nbr_size.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 22:36:13 04/11/2022
*/

int my_get_nbr_size(int nb)
{
    int size = 0;

    if (nb < 0) {
        nb = nb * -1;
        size++;
    }
    while (nb > 0) {
        nb /= 10;
        size++;
    }
    return (size);
}
