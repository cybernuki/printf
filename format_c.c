#include "holberton.h"
/**
  * format_c - return the format character
  * @arg:is the argument
  * Return: retur the character or 1
  */
int format_c(va_list arg)
{
	char chr;

	chr = va_arg(arg, int);
	return (write(1, &chr, 1));
}
