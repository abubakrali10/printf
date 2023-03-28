#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_hex - print hex number
 * @args: args input
 * Return: length
 */
int p_hex(va_list args)
{
	unsigned int s = va_arg(args, unsigned int);
	int i = 0, j, hex[32], x = 0;
	hexdi hex_table[] = {
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'}
	};

	while (s > 0)
	{
		hex[i] = s % 16;
		s /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hex[j] > 9)
		{
			while (x < 6)
			{
				if (hex_table[x].n == hex[j])
				{
					_putchar(hex_table[x].c);
					break;
				}
				x++;
			}
		}
		else
			_putchar(hex[j] + '0');
	}

	return (i);
}
