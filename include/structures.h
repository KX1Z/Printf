/*
** EPITECH PROJECT, 2022
** structures.h
** File description:
** Created by Arthur MAQUET
** First edition:
** 15:45:40 04/11/2022
*/

#ifndef B_CPE_101_LYN_1_1_MYPRINTF_ARTHUR_MAQUET_STRUCTURES_H
    #define B_CPE_101_LYN_1_1_MYPRINTF_ARTHUR_MAQUET_STRUCTURES_H

    #include <stdbool.h>

typedef struct {
    char c;
    unsigned int precision;
    unsigned int width;
    bool is_space;
    bool is_hashtag;
    bool is_plus;
    bool is_minus;
    bool is_zero;
} flags_t;

#endif //B_CPE_101_LYN_1_1_MYPRINTF_ARTHUR_MAQUET_STRUCTURES_H
