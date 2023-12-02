#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct ops - struct used for get a format/function
 * @find: is a character to find
 * @func: is a function
 *
 */
typedef struct ops
{
	char find;
	int (*func)(va_list args);
} ops;

int _putchar(char);
int _printf(const char *format, ...);
int printf_char(va_list args);
int printf_int(va_list args);
int printf_str(va_list args);

#endif
