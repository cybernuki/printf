#include "holberton.h"
/*
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int bytes_writted, i = 0;
	va_list arg;
	specifiers spec = {"cs%"};

	va_start(arg, format);
	while (format[i])
	{
		bytes_writted += formating(format, &i,spec, arg);
	}

	va_end(arg);
	return (bytes_writted);
}
