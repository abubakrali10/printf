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
	int i = 0, j = 0, find, len = 0;
	char percentage[1] = "%";

	while (format[i] != '\0')
	{
		find = 0;
		j = 0;
		while (j < 12)
		{
			if (!format[i + 1] && format[i] == *percentage)
				return (-1);
			if (format[i + 1] == *(identfy[j].str) && format[i] == *percentage)
			{
				find = 1;
				len += identfy[j].f(args);
				i++;
				break;
			}
			j++;
		}
		if (find == 0)
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	return (len);
}
