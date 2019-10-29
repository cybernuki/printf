#include "holberton.h"
/**
 * format_i - is the forman by int
 * @arg: is the argument
 * Return: i
 */
int format_i(va_list arg)
{
	(void) arg;
	int i = va_arg(arg, int);

	return (i);
}

