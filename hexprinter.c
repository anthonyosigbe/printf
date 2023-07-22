#include "main.h"
#include <stdio.h>

/**
 * printHexadecimal - prints a hexadecimal
 * @format: format to print hexadecimal (unused in this implementation).
 * @args: va_list that contains the hexadecimal to print.
 * Return: number of digits printed.
 */
int printHexadecimal(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num2;
	int i, i2, copy, count = 0;
	char *numhex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; count++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(count);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10 + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (count);
}

/**
 * printCapitalHexadecimal - prints a hexadecimal in uppercase
 * @format: format to print hexadecimal (unused in this implementation).
 * @args: va_list that contains the hexadecimal to print.
 * Return: number of digits printed.
 */
int printCapitalHexadecimal(char *format, va_list args)
{
	unsigned int NUM = va_arg(args, unsigned int);
	unsigned int NUM2;
	int I, I2, COPY, COUNT = 0;
	char *NUMHEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; COUNT++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(COUNT);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUMHEX[I] = COPY + '0';
		else
			NUMHEX[I] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (COUNT);
}

/**
 * print_binary - Converts a number from base 10 to binary and prints it.
 * @list: va_list containing the number to convert (unsigned int).
 * Return: The length of the binary number printed.
 *
 * Description: The function takes an unsigned integer specified in the
 * va_list 'list'
 * and converts it to its binary representation. The binary number is then
 * pinted to the standard output. If the number is 0, it directly prints '0'.
 * if the number is less than 1, it returns -1. The function returns the
 *length of the binary number printed.
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);

	len = countDigitsBase(num, 2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';

	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);

	for (i = 0; rev_str[i] != '\0'; i++)
		_putchar(rev_str[i]);

	free(str);
	free(rev_str);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it.
 * @num: Number to convert into a letter.
 * @x: Tells which hex function is calling it ('x' or 'X').
 * Return: Ascii value for a letter.
 *
 * Description: The function takes an integer 'num' representing a digit
 * (10 to 15)
 * and a character 'x' that indicates whether the hex function is for lowercase
 * ('x')
 * or uppercase ('X') hexadecimal conversion. The function returns the
 * corresponding
 * ASCII value for the letter representing the digit in the hexadecimal format.
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
}
