#include "holberton.h"
/**
 *  subformat -it finds a substring that start with %
 *  and finish with a specifier
 *  and evaluates if it is a format
 *  @p: is the string that start in a % char
 *  @index: is the adress of the external index
 *  @specs: are the current implemented specifiers
 *  Return: how many bytes it could print
 */
int formating(const char *p, int *index, va_list arg)
{
	int j, start = *index;
   
	specifier spec[] = {
        {'c', format_c},
        {'s', format_s},
	{'i', format_number},
	{'d', format_number},
        {'\0', NULL}
    };
	if (p[*index] != '%')
    {
	    while (p[*index] != '%' && p[*index] != '\0')
	    {
            *index = *index + 1;
        }
	    return (write(1, p + start, *index - start));
    }
	if (p[*index + 1] == '\0')
    {
	    *index = *index + 1;
	    return (-1);
    }
	*index = *index + 1;
    if (p[*(index)] == '%')
    {
	    int tmp = write (1, p + start, *index - start);
	    *index = *index + 1;
	    return(tmp);
    }
    if (p[*index] != '\0')
    {
        j = 0;
        while (spec[j].letter != '\0')
        {
            if (p[*index] == spec[j].letter)
            {
		    *index = *index + 1;
		    return(spec[j].f(arg));
            }
            j++;
        }

        *index = *index + 1;
    }
    while (p[*index] != '%' && p[*index] != '\0')
        {
            *index = *index + 1;
        }
    return (write (1, p + start, *index - start));
}
