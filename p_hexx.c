#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_hexx - print hex number
 * @args: args input
 * Return: length
 */
int p_hexx(va_list args)
{
	unsigned int s = va_arg(args, unsigned int);

	return (hex_cap(s));
}
