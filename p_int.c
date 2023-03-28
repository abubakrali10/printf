#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * p_int - handling (%d and %i) specifier
 * @args: list name
 * Return: length
 */
int p_int(va_list args)
{
	int len = 0, j, reverse = 0;
	int s = va_arg(args, int);

	if (s == 0)
	{
		_putchar('0');
		return (1);
	}

	if (s < 0)
	{
		_putchar('-');
		s = s * -1;
		len++;
	}
	j = s % 10;
	s /= 10;
	len++;

	while (s != 0)
	{
		reverse = (reverse * 10) + s % 10;
		s /= 10;
		len++;
	}
	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}
	_putchar(j + '0');

	return (len);
}
