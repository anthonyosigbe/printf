#include "main.h"

/**
 * _puts - prints a string followed by a new line, to stdout.
 * @string: input string
 * Return: count of characters printed.
 */
int _puts(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}

