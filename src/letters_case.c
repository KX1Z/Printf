/*
** EPITECH PROJECT, 2022
** switch_case_letters.c
** File description:
** Created by Arthur MAQUET
** First edition:
** 16:25:10 04/11/2022
*/

#include "my.h"

static void letters_case_five(char c, char **output_ptr, va_list *args)
{
    switch (c) {
        case 'l':
            *output_ptr = l_case(va_arg(*args, long));
            break;
        default:
            *output_ptr = c_case(c);
            break;
    }
}

static void letters_case_four(char c, char **output_ptr, va_list *args)
{
    switch (c) {
        case 'g':
            *output_ptr = g_case(va_arg(*args, double), false);
            break;
        case 'G':
            *output_ptr = g_case(va_arg(*args, double), true);
            break;
        case 'E':
            *output_ptr = e_case(va_arg(*args, double), true);
            break;
        case 'u':
            *output_ptr = u_case(va_arg(*args, unsigned int));
            break;
        default:
            letters_case_five(c, output_ptr, args);
            break;
    }
}

static void letters_case_three(char c, char **output_ptr, va_list *args)
{
    switch (c) {
        case 'b':
            *output_ptr = b_case(va_arg(*args, unsigned int));
            break;
        case 'x':
            *output_ptr = x_case(va_arg(*args, unsigned int), false);
            break;
        case 'X':
            *output_ptr = x_case(va_arg(*args, unsigned int), true);
            break;
        case 'f':
            *output_ptr = f_case(va_arg(*args, double));
            break;
        case 'e':
            *output_ptr = e_case(va_arg(*args, double), false);
            break;
        default:
            letters_case_four(c, output_ptr, args);
            break;
    }
}

static void letters_case_two(char c, char **output_ptr, va_list *args)
{
    switch (c) {
        case 'p':
            *output_ptr = p_case(va_arg(*args, void *));
            break;
        case '%':
            *output_ptr = percent_case();
            break;
        case 'd':
        case 'i':
            *output_ptr = d_case(va_arg(*args, int));
            break;
        case 'o':
            *output_ptr = o_case(va_arg(*args, unsigned int));
            break;
        default:
            letters_case_three(c, output_ptr, args);
            break;
    }
}

void letters_case(char c, va_list *args, flags_t flags)
{
    char *output_ptr = NULL;

    flags.c = c;
    switch (c) {
        case 'c':
            output_ptr = c_case(va_arg(*args, int));
            break;
        case 's':
            output_ptr = s_case(va_arg(*args, char *));
            break;
        default:
            letters_case_two(c, &output_ptr, args);
            break;
    }
    if (output_ptr == NULL)
        return;
    check_other(output_ptr, flags);
    free(output_ptr);
}
