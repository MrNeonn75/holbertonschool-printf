/**
 * File : printf_char.c
 * 
 * Author: 7727@holbertonstudents.com
*/

#include "main.h"

/**
 * printf_char - Function to print characters
 * @args: list of arguments
 * 
 * Return: 1
 */
int printf_char(va_list args)
{
	char chr;

	chr = va_arg(args, int);
	_putchar(chr);
	return (1);
}
