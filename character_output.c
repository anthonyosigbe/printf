#include "main.h"

/**
 * printf_char - Prints a character.
 * @val: Variable argument list containing the arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

