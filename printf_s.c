#include "holberton.h"
int format_s(va_list arg)
{
	int str = 0,i;
	char *str = va_arg(arg, char*);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		putchar(str);
	}
	return (i);
}
