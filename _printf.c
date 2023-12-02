/**
 * File : _printf.c
 *
 * Author: 7727@holbertonstudents.com
*/

#include "main.h"

/**
 * runner - choose the format/function
 * @c: character
 *
 * Return: the correct function :)
 */
int (*runner(char c))(va_list)
{
	int j = 0;
	ops ops[] = {
	{'i', printf_int},
	{'d', printf_int},
	{'c', printf_char},
	{'s', printf_str},
	{'\0', NULL}
	};
	for (j = 0; ops[j].find != '\0'; j++)
	{
		if (ops[j].find == c)
		{
			return (ops[j].func);
		}
	}
	return (0);
}

/**
 * _printf - a remake of the printf function
 * @format: is the format to print
 * Return: the character displayed on the screen
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	else if (format != NULL && format[i] != '\0')
	{
		for (; format[i]; i++)
		{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				count++, i++;
			}
			else if (format[i] == '%')
			{
				if ((*(runner(format[i + 1]))) == 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
				{
					count += (*(runner(format[i + 1])))(args);
				}
			i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
