#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in place.
 *
 * @s: String to reverse.
 * Return: A pointer to a character.
 *
 * Description: The function takes a string 's' and reverses it in place.
 * It allocates memory for the reversed string and copies the original
 * string's content into it. Then, it performs the reversal by swapping
 * characters from the beginning and end of the string. The reversed string
 * is returned, and the caller is responsible for freeing the memory.
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 * write_base - Sends characters to be written on standard output.
 * @str: String to parse.
 *
 * Description: The function takes a string 'str' and writes its
 *              characters to the standard output using the _putchar function.
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * base_len - Calculates the length of a number in a specific base.
 * @num: The number for which the length is being calculated.
 * @base: Base to be calculated by.
 * Return: An integer representing the length of the number.
 *
 * Description: The function takes an unsigned integer 'num' and calculates
 * the number of digits to base. It returns the length of the number in the
 * specified base.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _memcpy - Copy memory area.
 * @dest: Destination for copying.
 * @src: Source to copy from.
 * @n: The number of bytes to copy.
 * Return: The _memcpy() function returns a pointer to dest.
 *
 * Description: The function takes 'n' bytes from the memory area pointed
 *              to by 'src' and copies them to the memory area pointed to
 *              by 'dest'. It then returns a pointer to 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

