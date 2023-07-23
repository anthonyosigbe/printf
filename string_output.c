#include "main.h"

/**
 * printString - Prints a string.
 * @val: Variable argument list containing the arguments.
 *
 * Return: The length of the string.
 */
int printString(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char*);
	if (s == NULL)
	{
		s = "(null)";
	}

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	return (len);
}

