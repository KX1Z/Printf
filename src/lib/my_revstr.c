/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-arthur.maquet
** File description:
** my_revstr
*/

#include "my.h"

char *rev_str(char *str)
{
    int count = my_strlen(str);
    int mid = count / 2 - 1;
    int i = 0;
    int l = count - 1;
    char tmp = 0;

    while (i <= mid) {
        tmp = str[i];
        str[i] = str[l];
        str[l] = tmp;
        i++;
        l--;
    }
    return str;
}
