#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct id - new struct called dog
 * @str: pointer string
 * @f: pointer to function
 */
typedef struct id
{
	char *str;
	int (*f)(va_list);
} id;

int _putchar(char c);
int _printf(const char *format, ...);
int p_perc(va_list args);
int p_char(va_list args);
int p_str(va_list args);

#endif
