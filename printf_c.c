#include "holberton.h"
char *format_c (va_list arg)
{
	char chr = va_arg(arg, int);
	if (chr != NULL)
		putchar(chr);
	if(chr == NULL)
		return (NULL);

}
