#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * p_perc - handling (% percentage) specifier
 * @args: list name
 * Return: length
 */
int p_perc(va_list args)
{
	(void) args;
	_putchar('%');
	return (1);
}
