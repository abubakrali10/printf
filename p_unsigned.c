#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * printu - Entry Point
 * @n: number
 * Return: void
 */

void printu(unsigned int n)
{
	if (n / 10 != 0)
		printu(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * p_unsigned - handling (u) specifier
 * @args: list name
 * Return: length
 */

int p_unsigned(va_list args)
{
	int len = 0;
	unsigned int s = va_arg(args, unsigned int);

	printu(s);
	while (s > 0)
	{
		s /= 10;
		len++;
	}

	return (len);
}
