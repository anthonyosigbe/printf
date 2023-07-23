#include "main.h"
/**
 * _printf - a function responsible for identifying the appropriate,
 * printing function based on the given format specifier.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_String},
		{"%c", printCharacter}, {"%%", printPercent},
		{"%i", printInt}, {"%d", printDec}, {"%r", printSrev},
		{"%R", printRot13}, {"%b", printBin}, {"%u", printUnsigned},
		{"%o", printOct},
		{"%x", print_Hex}, {"%X", printCap_HEX}, {"%S", printExclusiveString},
		{"%p", printPointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
