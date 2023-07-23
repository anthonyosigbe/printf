#include "main.h"

/**
 * printf_exclusive_string - Prints a string with non-printable characters,
 * represented as hexadecimal escape sequences.
 * @val: Variable argument list containing the arguments.
 * Return: The length of the printed string.
 */
int printf_exclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			cast = (int)s[i];

			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len += printf_HEX_aux(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}

	return (len);
}
