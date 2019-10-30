#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct specifier - all the current specifiers implemented
 * @letter: are the current specifiers
 * @f: correspond to a new
 * @ Return: nothing is a struct
 */
typedef struct specifier
{
	char letter;
	int (*f)(va_list);
} specifier;

int _printf(const char *format, ...);

int formating(const char *p, int *index, va_list arg);
int isFormat(const char *p, int *i, int start, va_list arg, specifier *spec);
void find_end(const char *p, int *index);
int format_s(va_list arg);
int format_c(va_list arg);
int format_number(va_list arg);
int  _putchar(char c);

#endif
