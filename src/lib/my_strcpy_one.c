/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-arthur.maquet
** File description:
** my_strcpy_one
*/

#include "my.h"

char *my_strcpy_one(char *str)
{
    int i = 2;
    int m = 0;

    char *tmp = malloc(sizeof(char) * my_strlen(str) + 3);
    tmp[0] = '0';
    tmp[1] = 'X';
    for (; str[m] != 0; m++) {
        tmp[i] = str[m];
        i++;
    }
    tmp[i] = 0;
    return tmp;
}

char *my_strcpy_two(char *str)
{
    int i = 2;
    int m = 0;

    char *tmp = malloc(sizeof(char) * my_strlen(str) + 3);
    tmp[0] = '0';
    tmp[1] = 'X';
    for (; str[m] != 0; m++) {
        tmp[i] = str[m];
        i++;
    }
    tmp[i] = 0;
    return tmp;
}

char *my_strcpy_three(char *str)
{
    int i = 1;
    int m = 0;

    char *tmp = malloc(sizeof(char) * my_strlen(str) + 2);
    tmp[0] = '0';
    for (; str[m] != 0; m++) {
        tmp[i] = str[m];
        i++;
    }
    tmp[i] = 0;
    return tmp;
}

char *my_strcpy_four(char *str)
{
    int i = 1;
    int m = 0;

    char *tmp = malloc(sizeof(char) * my_strlen(str) + 2);
    tmp[0] = '+';
    for (; str[m] != 0; m++) {
        tmp[i] = str[m];
        i++;
    }
    tmp[i] = 0;
    return tmp;
}

char *my_strcpy_five(char *str)
{
    int i = 1;
    int m = 0;

    char *tmp = malloc(sizeof(char) * my_strlen(str) + 2);
    tmp[0] = ' ';
    for (; str[m] != 0; m++) {
        tmp[i] = str[m];
        i++;
    }
    tmp[i] = 0;
    return tmp;
}
