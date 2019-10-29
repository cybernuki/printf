#include "holberton.h"
/**
 *  subformat -it finds a substring that start with % and finish with a specifier
 *  and evaluates if it is a format
 *  @p: is the string that start in a % char
 *  @index: is the adress of the external index
 *  @specs: are the current implemented specifiers
 *  Return: how many bytes it could print
 */
int formating (const char *p, int *index, va_list arg)
{
    int j, start = *index;
    /*  format_factory */
   specifier spec[] = {
        {'c',format_c},
        {'s',format_s},
        {'\0', NULL}
    };


   /* si no es formato */
    if (p[*index] != '%')
    {
	    /* buscar donde termina el substring */
        while (p[*index] != '%' && p[*index] != '\0')
        {
            *index = *index + 1;
        }

        return (write(1, p + start, *index - start));
    }
    /* Es cuando es el format %% */
    *index = *index + 1;
    if (p[*(index)] == '%')
    {
	    /* Send to buffer the % */

        *index = *index + 1;
	return(write (1, p + start, *index - start));
    }

    /* Cuando empiezan con % */
    if (p[*index] != '\0')
    {
        j = 0;
        while (spec[j].letter != '\0')
        {
            if (p[*index] == spec[j].letter)
            {

		    /* Verify if this is a format */
                    /* if it is, do the format and send to buffer */
                *index = *index + 1;
                /* Buffering */
                return(spec[j].f(arg));
            }
            j++;
        }

        *index = *index + 1;
    }
    /* if that substring is not a format, send to buffer */
    /* buscar donde termina el substring */
        while (p[*index] != '%' && p[*index] != '\0')
        {
            *index = *index + 1;
        }
    return(write (1, p + start, *index - start));
}
