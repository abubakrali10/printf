#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * getlen - get length of number
 * @n: number input
 * Return: length
 */
int getlen(long int n)
{
	int len = 0;

	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}
/**
 * intToAscii - convert number to ascii code
 * @n: input n
 * Return: ascii code
 */
int intToAscii(long int n)
{
	return ('0' + n);
}
/**
 * p_int - handling (%d and %i) specifier
 * @args: list name
 * Return: length
 */
int p_int(va_list args)
{
	char *p;
	long int s = va_arg(args, long int);
	long int num;
	int len = 0, i = 0, j;

	if (s == 0)
	{
		_putchar('0');
		return (1);
	}
	if (s < 0)
	{
		_putchar('-');
		len++;
		num = s * -1;
	}
	else
		num = s;

	len += getlen(num);

	p = malloc(sizeof(char) * (getlen(num) + 1));

	while (num > 0)
	{
		p[i] = intToAscii(num % 10);
		num /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(p[j]);

	return (len);
}
