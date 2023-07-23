#include "main.h"
#include <string.h>
/**
 * printString - Prints a string.
 * @val: Variable argument list containing the arguments.
 *
 * Return: The length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
