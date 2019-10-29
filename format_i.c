#include "holberton.h"
int format_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	return (i);
}
