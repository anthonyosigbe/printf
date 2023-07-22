#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - Output a character to the standard output (stdout).
 * @ch: The character to print.
 * Return: On success, it returns 1. On failure, it returns 0.
 */
int _putchar(char ch)
{
	static int char_count;
	static char buffer[BUFFER_SIZE];

	if (ch == -1)
	{
		char_count = 0;
		return (0);
	}

	if (ch != -1 && ch != -2)
	{
		buffer[char_count++] = ch;

		if (char_count == BUFFER_SIZE || ch == -2)
		{
			write(1, buffer, char_count);
			char_count = 0;
		}

		return (1);
	}

	return (0);
}

