#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_rot - print rot13 function
 * @args: input argument
 * Return: length
 */
int p_rot(va_list args)
{
	int len = 0;
	char *s = va_arg(args, char *);

	while (s[len])
	{
		int n = 0;

		if (s[len] > 64 && s[len] < 91)
		{
			n = 13 + (int)s[len];
			if (n > 90)
				n -= 26;
			_putchar(n);
		}
		else if (s[len] > 96 && s[len] < 122)
		{
			n = 13 + (int)s[len];
			if (n > 122)
				n -= 26;
			_putchar(n);
		}
		else
			_putchar(s[len]);
		len++;
	}

	return (len);
}
