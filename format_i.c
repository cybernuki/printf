#include "holberton.h"
int format_i(va_list arg)
{
	(void) arg;
	int i = va_arg(arg, int);
	return (i);
}

