#include "holberton.h"
/**
  * format_s - is the forman by string
  * @arg: is the argument
  * Return: i or -1
  */
int format_s(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
		return (write(1, "(null)", 6));
	for (i = 0; *(str + i); i++)
	{
		write(1, (str + i), 1);
	}
	return (i);
}
