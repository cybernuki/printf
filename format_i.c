#include "holberton.h"
/**
 * format_i - is the forman by int
 * @arg: is the argument
 * Return: i
 */
int format_i(va_list arg)
{
	int n, i, power;

	n = va_arg(arg, int);
	power = 1;

	if (n < 0)
	{
		_putchar('-');
	}

	while ((n / power) > 9 || (n / power) < -9)
	{
		power *= 10;
	}
	for (i = power; i >= 1 || i <= -1; i /= 10)
	{
		if (n < 0)
		{
			_putchar((n / i) % 10 * -1 + '0');
		}
		else
		{
			_putchar((n / i) % 10 + '0');
		}
	}
	return (0);
}
