/*
** EPITECH PROJECT, 2022
** flags_case.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:04:43 04/11/2022
*/

#include "my.h"

static bool is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (true);
    return (false);
}

static void width_case(const char * restrict format, int *i, flags_t *flags)
{
    if (!is_number(format[*i]))
        return;
    flags->width = my_ptr_get_nbr(format, i);
    while (is_number(format[*i]))
        (*i)++;
}

static void coding_style_two(const char * restrict format,
va_list *args, int *i, flags_t flags)
{
    switch (format[*i]) {
        case '-':
            flags.is_minus = true;
            (*i)++;
            flags_case(format, args, i, flags);
            break;
        case '.':
            (*i)++;
            flags.precision = my_ptr_get_nbr(format, i);
            flags_case(format, args, i, flags);
            break;
        default:
            width_case(format, i, &flags);
            letters_case(format[*i], args, flags);
            (*i)++;
            break;
    }
}

static void coding_style(const char * restrict format, va_list *args, int *i,
flags_t flags)
{
    switch (format[*i]) {
        case '0':
            flags.is_zero = true;
            (*i)++;
            flags_case(format, args, i, flags);
            break;
        case '+':
            flags.is_plus = true;
            (*i)++;
            flags_case(format, args, i, flags);
            break;
        default:
            coding_style_two(format, args, i, flags);
            break;
    }
}

void flags_case(const char * restrict format, va_list *args, int *i,
flags_t flags)
{
    switch (format[*i]) {
        case '#':
            flags.is_hashtag = true;
            (*i)++;
            flags_case(format, args, i, flags);
            break;
        case ' ':
            if (!flags.is_space) {
                my_putchar(' ');
                flags.is_space = true;
            }
            (*i)++;
            flags_case(format, args, i, flags);
            break;
        default:
            coding_style(format, args, i, flags);
            break;
    }
}
