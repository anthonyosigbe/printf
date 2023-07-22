#include "main.h"
#include <stdio.h>

/**
 * printOctal - Prints the numeric representation of a number in octal base.
 * @format: Format string.
 * @args: List of all the arguments passed to the program.
 * Return: Number of symbols printed to stdout.
 *
 * Description: The function takes an unsigned integer 'num' from the variable
 * argument list 'args' and converts it to its octal representation. It then
 * prints the octal representation to the standard output using the _putchar
 * function. The function returns the number of characters printed.
 */
int printOctal(char *format, va_list args)
{
	unsigned int num;
	int len;
	char *octal_rep;
	char *rev_str;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_rep = malloc(sizeof(char) * (len + 1));
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_rep[len] = (num % 8) + '0';
		num = num / 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}

