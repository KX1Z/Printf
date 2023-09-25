/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-arthur.maquet
** File description:
** my_putstr
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != 0; i++)
        my_putchar(str[i]);
}
