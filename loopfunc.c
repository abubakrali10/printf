#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * loopfunc - function loop on format and check structure
 * @format: string format of printf
 * @identfy: structure pointer
 * @args: rest arguments va_list
 * Return: lenght of output
 */
int loopfunc(const char *format, id *identfy, va_list args)
{
	int i = 0, j = 0, len = 0;
	char percentage[1] = "%";

	while (format[i] != '\0')
	{
		j = 0;
		if (format[i] == *percentage)
		{
			while (j < 11)
			{
				if (format[i + 1] == *(identfy[j].str))
				{
					len += identfy[j].f(args);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	return (len);
}
