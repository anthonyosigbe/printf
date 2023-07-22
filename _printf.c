#include "main.h"

/**
 * _printf - This function is responsible for printing,
 * formatted data to the standard output (stdout).
 * @format: A string that contains the format to be printed.
 * Return: The number of characters successfully written to the output.
 */

int _printf(const char *format, ...)
{
	int written = 0;
	int (*structype)(char *, va_list);
	va_list pa;

	if (format == NULL)
		return (-1);

	va_start(pa, format);
	_putchar(-1);
	while (*format)
	{
		if (*format == '%')
		{
			structype = selectFormatter(format);
			if (structype)
			{
				written += structype((char *)format, pa);
				format++;
			}
			else if (*(format + 1) != '\0')
			{
				written += _putchar('%');
				written += _putchar(*(format + 1));
				format += 2;
			}
			else
			{
				written += _putchar('%');
				break;
			}
		}
		else
		{
			written += _putchar(*format);
			format++;
		}
	}
	_putchar(-2);
	va_end(pa);
	return (written);
}
