/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-miniprintf-keziah.picq
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stddef.h>
    #include <ncurses.h>
    #include <string.h>
    #include <limits.h>

    #include "structures.h"

    #define PRECISION 6

void flags_case(const char * restrict format, va_list *args, int *i,
                flags_t flags);
void letters_case(char c, va_list *args, flags_t flags);

// Library
unsigned int my_ptr_get_nbr(char const *str, int *i);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_put_unsigned_number(unsigned int nb);
int my_strlen(char const *str);
void my_putstr(char const *str);
int my_get_nbr_size(int nb);

// Letters cases
char *c_case(char c);
char *s_case(char *str);
char *p_case(void const *p);
char *d_case(int value);
char *o_case(unsigned int value);
char *u_case(unsigned int nb);
char *b_case(unsigned int nb);
char *x_case(unsigned int nb, bool upper_case);
char *f_case(double value);
char *l_case(long value);
char *e_case(double nb, bool upper_case);
char *g_case(double value, bool upper_case);
char *f_from_g_case(double value);
char *percent_case(void);
char *my_strcpy_one(char *str);
char *my_strcpy_two(char *str);
char *my_strcpy_three(char *str);
char *my_strcpy_four(char *str);
char *my_strcpy_five(char *str);
void check_other(char *output_ptr, flags_t flags);

#endif /* !MY_H_ */
