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
	(void)s;

	return (0);
}
