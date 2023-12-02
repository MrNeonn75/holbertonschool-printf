/**
 * Author: 7727@holbertonstudents.com
*/

#include "main.h"
#include <stdlib.h>

/**
 * printf_str : Prints the string
 * @args: string
 *
 * Return: lenght of string, and (null) if str is NULL
 */
int printf_str(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
