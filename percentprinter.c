#include "main.h"

/**
 * printPercentage - Prints the percentage symbol '%'.
 * @format: Format specifier (unused in this implementation).
 * @args: va_list (unused in this implementation).
 * Return: Number of characters printed (always 1 for the percentage symbol).
 */
int printPercentage(char *format, va_list args)
{
	(void)format;
	(void)args;

	_putchar('%');
	return (1);
}
