#include "main.h"

/**
 * printString - Prints a string.
 * @format: Format specifier (unused in this implementation).
 * @args: va_list that contains the string to print.
 * Return: Number of characters printed.
 *
 * Description: The function prints the string specified in the va_list 'args'
 * to the standard output. If the string is NULL, it prints "(null)" instead.
 * The function returns the number of characters printed.
 */
int printString(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int count;
	(void)format;

	if (string == NULL)
		string = "(null)";
	count = _puts(string);
	return (count);
}

/**
 * rot13 - Converts a string to rot13.
 * @list: va_list containing the string to convert.
 * Return: The number of characters printed.
 *
 * Description: The function takes a string specified in the va_list 'list'
 * and applies the ROT13 cipher to convert it. The converted string is then
 * printed to the standard output. If the input string is NULL, the function
 * returns -1. The function returns the number of characters printed.
 */
int rot13(va_list list)
{
	int i, x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_putchar(u[x]);
				break;
			}
		}
		if (x == 53)
			_putchar(str[i]);
	}
	return (i);
}

/**
 * print_reversed - Calls a function to reverse and print a string.
 * @arg: Argument passed to the function (va_list containing the string).
 * Return: The number of characters printed.
 */
int print_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);

	if (ptr == NULL)
		return (-1);

	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return (len);
}
