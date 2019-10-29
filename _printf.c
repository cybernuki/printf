#include "holberton.h"
/*
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int bytes_writted = 0, i = 0;
	va_list arg;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	while (format[i])
	{
		bytes_writted += formating(format, &i, arg);
	}

	va_end(arg);
	return (bytes_writted);
}
