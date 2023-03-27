#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print - Entry Point
 * @n: number
 * Return: void
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n / 10 != 0)
	{
		print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * p_int - handling (%d and %i) specifier
 * @args: list name
 * Return: length
 */

int p_int(va_list args)
{
	int len = 0;
	int s = va_arg(args, int);

	print(s);
	if (s < 0)
	{
		len++;
		s = s * (-1);
	}
	if (s > 0)
	{
		s = s / 10;
		len++;
	}

	return (len);
}
