#include "main.h"

/**
 * selectFormatter - Selects the appropriate formatter function,
 * based on the format specifier.
 * @format: The format specifier string.
 * Description: The function loops through the list of formatter functions.
 * defined in the 'PrintFunctionEntry' struct.
 *
 * Return: A function pointer to the appropriate formatter function.
 */
int (*selectFormatter(const char *format))(char *format, va_list)
{
	int i;

	PrintFunctionEntry selector[] = {
		{"%c", printCharacter},
		{"%s", printString},
		{"%d", printInteger},
		{"%i", printInteger},
		{"%%", printPercentage},
		{"%x", printHexadecimal},
		{"%X", printCapitalHexadecimal},
		{"%o", printOctal},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].formatSpecifier; i++)
	{
		if (format[1] == selector[i].formatSpecifier[1])
			return (selector[i].printFunction);
	}
	return (NULL);
}
