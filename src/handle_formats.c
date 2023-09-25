/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-arthur.maquet
** File description:
** handle_formats
*/

#include "my.h"

char *check_if_hashtag_and_plus_bis(char *output_ptr, flags_t flags)
{
    char *new_string = output_ptr;

    if (flags.is_plus && (output_ptr[0] != '-') &&
    (flags.c != 'x' && flags.c != 'X' && flags.c != 'o' &&
    flags.c != 'O') && flags.is_space)
        new_string = my_strcpy_four(output_ptr);
    if (flags.is_plus && (output_ptr[0] != '-') &&
    (flags.c != 'x' && flags.c != 'X' && flags.c != 'o' &&
    flags.c != 'O'))
        new_string = my_strcpy_four(output_ptr);
    if (flags.is_plus && (output_ptr[0] == '-') &&
    (flags.c != 'x' && flags.c != 'X' && flags.c != 'o' &&
    flags.c != 'O') && flags.is_space)
        new_string = my_strcpy_five(output_ptr);
    return new_string;
}

char *check_if_hashtag_and_plus(char *output_ptr, flags_t flags)
{
    char *new_string = output_ptr;

    new_string = check_if_hashtag_and_plus_bis(output_ptr, flags);
    if (flags.is_hashtag && (flags.c == 'x'))
        new_string = my_strcpy_one(output_ptr);
    if (flags.is_hashtag && (flags.c == 'X'))
        new_string = my_strcpy_two(output_ptr);
    if (flags.is_hashtag && (flags.c == 'o'))
        new_string = my_strcpy_three(output_ptr);
    if (flags.is_hashtag && (flags.c == 'O'))
        new_string = my_strcpy_three(output_ptr);
    return new_string;
}

void check_other_bis_second(char *output_ptr, flags_t flags, char *str,
unsigned int result)
{
    if (flags.is_zero && flags.is_minus == false && flags.is_plus) {
        my_putchar(str[0]);
        for (unsigned int i = 0; i < result; i++)
            my_putchar('0');
        for (int i = 1; str[i] != 0; i++)
            my_putchar(str[i]);
    } if (flags.is_zero && flags.is_minus) {
        my_putstr(str);
    } if (flags.is_zero == false && flags.is_minus == false) {
        for (unsigned int i = 0; i < result; i++)
            my_putchar(' ');
        my_putstr(str);
    }
}

void check_other_bis(char *output_ptr, flags_t flags, char *str,
unsigned int result)
{
    if (flags.is_zero == false && flags.is_minus) {
        my_putstr(str);
        for (unsigned int i = 0; i < result; i++)
            my_putchar(' ');
    } if (flags.is_zero && flags.is_minus == false && flags.is_plus == false) {
        for (unsigned int i = 0; i < result; i++)
            my_putchar('0');
        for (int i = 0; str[i] != 0; i++)
            my_putchar(str[i]);
    } check_other_bis_second(output_ptr, flags, str, result);
}

void check_other(char *output_ptr, flags_t flags)
{
    char *str = check_if_hashtag_and_plus(output_ptr, flags);
    int length = my_strlen(str);
    unsigned int result = flags.width - length;

    if (flags.width > length)
        check_other_bis(output_ptr, flags, str, result);
    else
        my_putstr(str);
}
