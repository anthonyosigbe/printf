#include "main.h"

/**
 * printf_hex - Prints a hexadecimal number.
 * @val: Variable argument list containing the arguments.
 * Return: The number of characters printed.
 */
int printf_hex(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			_putchar(array[i] + 55);
		else
			_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
