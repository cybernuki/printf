#include "holberton.h"
/**
  * format_s - is the forman by string
  * @arg: is the argument
  * Return: i or -1
  */
int format_s(va_list arg)
{
	(void) arg;
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
		return (-1);
	for (i = 0; *(str + i); i++)
	{
		write(1, (str + i), 1);
	}
	return (i);
}
