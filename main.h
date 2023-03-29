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
/**
 * struct hexdi - new struct called hexid
 * @n: number
 * @c: character
 */
typedef struct hexdi
{
	int n;
	char c;
} hexdi;

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
int p_hex(va_list args);
int p_hexx(va_list args);
int p_reverse(va_list args);
int p_rot(va_list args);
int hex_cap(int s);

#endif
