/**
 * File : printf_int.c
 *
 * Author: 7727@holbertonstudents.com
*/

#include "main.h"

/**
 * printf_int - Print numbers
 * @args: Arguments
 *
 * Return: count
 */
int printf_int(va_list args)
{
	long int n = va_arg(args, int), i = 1;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		count++;
	}
	for (i = 10; i <= n; i *= 10)
	{
	}
	i /= 10;
	for (; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
		count++;
	}
	return (count);
}
