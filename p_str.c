#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * p_str - Entry Point
 * @args: list name
 *
 * Return: length
 */
int p_str(va_list args)
{
	char *s = va_arg(args, char*);
	int i = 0;

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
