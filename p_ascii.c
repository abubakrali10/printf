#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * p_ascii - changing charcter
 * @args: list
 * Return: length
 */

int p_ascii(va_list args)
{
	char *s = va_arg(args, char*);
	int len = 0, i = 0;

	while (s[len])
	{
		if (s[len] >= 127 || (s[len] > 0 && s[len] < 32))
		{
			i += 2;
			_putchar('\\');
			_putchar('x');
			if ((int)s[len] < 15)
			{
				i++;
				_putchar('0');
				i += hex_cap((int)s[len]);
			}
			else
				i += hex_cap((int)s[len]);
		}
		len++;	
	}

	return (i);
}
