#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to a character array.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _strlenc - Counts the characters in a constant string.
 * @s: Constant pointer to a character array.
 * Return: The number of characters in the string.
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
