#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * hex_cap - print hex number
 * @s: args input
 * Return: length
 */
int hex_cap(int s)
{
	int i = 0, j, hex[32], x = 0;
	hexdi hex_table[] = {
		{10, 'A'},
		{11, 'B'},
		{12, 'C'},
		{13, 'D'},
		{14, 'E'},
		{15, 'F'}
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
