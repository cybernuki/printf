#include "holberton.h"
/**
 * formating -it finds a substring that start with %
 *  and finish with a specifier
 *  and evaluates if it is a format
 * @p: is the string that start in a % char
 * @index: is the adress of the external index
 * @arg: is the corresponding argument
 * Return: how many bytes it could print
 */
int formating(const char *p, int *index, va_list arg)
{
<<<<<<< HEAD
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
=======
	int start = *index;
	/*  format_factory */
	specifier spec[] = {
		{'c', format_c},
		{'s', format_s},
		{'i', format_number},
		{'d', format_number},
		{'\0', NULL}
	};


	/* si no es formato */
	if (p[*index] != '%')
	{
		/* buscar donde termina el substring */
		find_end(p, index);
		return (write(1, p + start, *index - start));
	}
	/* Es cuando es el format %% */
	if (p[*index + 1] == '\0')
	{
		*index = *index + 1;
		return (-1);
	}

	*index = *index + 1;
	if (p[*(index)] == '%')
	{
		/* Send to buffer the % */
		int tmp = write(1, p + start, *index - start);
		*index = *index + 1;
		return (tmp);
	}

	/* Cuando empiezan con % */
	return (isFormat(p, index, start, arg, spec));
}

/**
 * isFormat - Verify if the substring that start with % is a format or not
 * In case that that is, this function print it with it corresponding function
 * Otherwise, print it as a normal text
 * @p: is the complete string
 * @i: is the current index
 * @start: is where the substring was started
 * @arg: is the corresponding argument
 * @spec: are the current implemented functions
 * Return: how many byte it could to print
 */
int isFormat(const char *p, int *i, int start, va_list arg, specifier *spec)
{
	int j;

	if (p[*i] != '\0')
	{
		j = 0;
		while (spec[j].letter != '\0')
		{
			if (p[*i] == spec[j].letter)
			{

				/* Verify if this is a format */
				/* if it is, do the format and send to buffer */
				*i = *i + 1;
				/* Buffering */
				return (spec[j].f(arg));
			}
			j++;
		}

		*i = *i + 1;
	}
	/* if that substring is not a format, send to buffer */
	/* buscar donde termina el substring */
	find_end(p, i);
	return (write(1, p + start, *i - start));
}

/**
 * find_end - get the index to last char of the substring
 * @p: is the string
 * @index: current index
 * Return: nothing
 */
void find_end(const char *p, int *index)
{
	while (p[*index] != '%' && p[*index] != '\0')
	{
		*index = *index + 1;
	}
>>>>>>> 31678e419a42fb904f784fcbe85786f0f433979e
}
