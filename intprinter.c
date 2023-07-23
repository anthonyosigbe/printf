#include "main.h"

/**
 * absoluteValue - Calculates the absolute value of an integer.
 * @number: Input integer.
 * Return: Absolute value.
 */
int absoluteValue(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * countDigits - Counts the digits of an integer.
 * @number: Input integer.
 * Return: Number of digits.
 */
int countDigits(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (absoluteValue(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}

/**
 * integer - Prints an integer.
 * @number: Input integer.
 * Return: Number of digits printed.
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = countDigits(number);
	if (number < 0)
	{
		_putchar('-');
		unint = absoluteValue(number);
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');
	return (count);
}

/**
 * printUnsigned - Prints an unsigned number.
 * @format: Format specifier (unused in this implementation).
 * @args: va_list that contains the unsigned integer to be printed.
 * Return: The number of characters printed.
 */
int printUnsigned(char *format, va_list args)
{
	int div;
	int len;
	unsigned int num;
	(void)format;

	div = 1;
	len = 0;

	num = va_arg(args, unsigned int);
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * printInteger - Prints an integer.
 * @format: Format to print the number (unused in this implementation).
 * @args: va_list with the number to print.
 * Return: Number of characters printed.
 */
int printInteger(char *format, va_list args)
{
	int number = va_arg(args, int);
	int digits;
	(void)format;

	digits = integer(number);

	return (digits);
}
