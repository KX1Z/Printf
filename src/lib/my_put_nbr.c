/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 10:35:42 01/11/2022
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else
        my_putchar((char)(nb + 48));
}

void my_put_unsigned_number(unsigned int nb)
{
    if (nb >= 10) {
        my_put_unsigned_number(nb / 10);
        my_put_unsigned_number(nb % 10);
    } else
        my_putchar((char)(nb + 48));
}
