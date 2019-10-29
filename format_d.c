#include "holberton.h"
/**
 * format_d - is the forman by %d
 * @arg: is the argument
 * Return: i
 */
int format_d(va_list arg)
{
	int d;

	d = va_arg(arg, int);
	
	return (d);
}
