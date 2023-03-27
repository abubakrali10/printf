#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * p_bin - converting to binary
 * @args: variable list
 * Return: length
*/

int p_bin(va_list args)
{
	int i = 0, bin[32], j;
	unsigned int s = va_arg(args, unsigned int);

	while (s > 0)
	{
		bin[i] = s % 2;
		s /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin[j] + '0');
	}

	return (i);
}
