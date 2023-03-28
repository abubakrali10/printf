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
int loopfunc(const char *format, id *identfy, va_list args);
int p_perc(va_list args);
int p_char(va_list args);
int p_str(va_list args);
int p_int(va_list args);
int p_bin(va_list args);
int p_octal(va_list args);
int p_unsigned(va_list args);

#endif
