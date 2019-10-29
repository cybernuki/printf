#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * strucut specifiers - all the current specifiers implemented
 * @specifier: are the current specifiers
 * @f: correspond to a new
 */
typedef struct specifiers
{
	char *specifier;
} specifiers;

int formating(const char *p, int *index, specifiers specs, va_list arg);
int format_s(va_list arg);
int format_c(va_list arg);

int _printf(const char *format, ...);
#endif
