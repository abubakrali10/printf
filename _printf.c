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
	int len = 0;
	va_list args;
	id identfy[] = {
		{"%", p_perc},
		{"c", p_char},
		{"s", p_str},
		{"d", p_int},
		{"i", p_int},
		{"b", p_bin},
		{"o", p_octal}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	len = loopfunc(format, identfy, args);

	va_end(args);

	return (len);
}
