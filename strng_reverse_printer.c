#include "main.h"

/**
 * printf_srev - Prints a string in reverse order.
 * @args: Type struct va_arg where is allocated printf arguments.
 * using if and while loop
 * Return: The number of characters printed.
 */
int printf_srev(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	return (j);
}

