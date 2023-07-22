#include "main.h"

/**
 * printCharacter - prints a character.
 * @format: format specifier (unused in this implementation).
 * @args: va_list containing the character to print.
 * Return: number of characters printed (always 1 for a single character).
 */
int printCharacter(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}

