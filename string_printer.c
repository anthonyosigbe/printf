#include "main.h"

/**
 * stringLength - Calculates the length of a string.
 * @s: Pointer to a character array.
 * Return: The length of the string.
 */
int stringLength(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * characterCount - Counts the characters in a constant string.
 * @s: Constant pointer to a character array.
 * Return: The number of characters in the string.
 */

int characterCount(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
