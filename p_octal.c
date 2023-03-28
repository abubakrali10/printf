#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * p_octal - converting to octal
 * @args: variable list
 * Return: length
*/

int p_octal(va_list args)
{
	int i = 0, oct[32], j;
	unsigned int s = va_arg(args, unsigned int);

	while (s > 0)
	{
		oct[i] = s % 8;
		s /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(oct[j] + '0');
	}

	return (i);
}
