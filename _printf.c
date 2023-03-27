#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - print input accord identifier
 * @format: input string
 * @...: rest arguments
 * Return: lenght of output
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, find, len = 0;
	char percentage[1] = "%";
	va_list args;
	id identfy[] = {
		{"%", p_perc},
		{"c", p_char},
		{"s", p_str}
	};

	if (format == NULL)
		_putchar(len);

	va_start(args, format);

	while (format[i] != '\0')
	{
		find = 0;
		j = 0;
		while (j < 3)
		{
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
	va_end(args);

	return (len);
}
