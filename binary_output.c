#include "main.h"

/**
 * printBin - Prints a binary number.
 * @val: Variable argument list containing the arguments.
 * Return: The number of characters printed.
 */
int printBin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + '0');
			cont++;
		}
	}

	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}

	return (cont);
}
