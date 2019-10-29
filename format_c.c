#include "holberton.h"
int format_c (va_list arg)
{
	(void) arg;
	char chr = va_arg(arg, int);
	if (chr == '\0')
	{
	return(0);
	}
	return (write(1,&chr,1));
	return (1);
}
