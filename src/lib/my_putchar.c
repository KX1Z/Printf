/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-arthur.maquet
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
