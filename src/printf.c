/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-keziah.picq
** File description:
** mini_printf
*/

#include "../include/my.h"

int my_printf(const char * restrict format, ...)
{
    va_list args;
    flags_t flags = {0, 0, 0, false, false, false, false, false};
    int i = 0;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            flags_case(format, &args, &i, flags);
            continue;
        }
        my_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (0);
}
