#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * specifiers - all the current specifiers implemented
 * @specifier: are the current specifiers
 * @f: correspond to a new
 */
typedef struct specifier
{
	char letter;
	int (*f)(va_list);
} specifier;

int _printf(const char *format, ...);

int formating(const char *p, int *index, va_list arg);
int format_s(va_list arg);
int format_c(va_list arg);
int format_number(va_list arg);
int  _putchar(char c);

#endif
