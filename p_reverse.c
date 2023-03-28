#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * get_length - getting string length
 * @p: the string pointer
 * Return: length
 */
int get_length(char *p)
{
	int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
/**
 * p_reverse - Entry Point
 * @args: list name
 *
 * Return: length
 */
int p_reverse(va_list args)
{
	char *s = va_arg(args, char*);
	int i;

	if (s == NULL)
		s = "(null)";
	for (i = get_length(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (i);
}
