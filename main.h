#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct PrintFunctionEntry - Structure containing information,
 * for printing data.
 * @formatSpecifier: The format specifier representing the data type.
 * @printFunction: The corresponding print function for the specific data type.
 */

typedef struct PrintFunctionEntry
{
	char *formatSpecifier;
	int (*printFunction)(char *format, va_list);
} PrintFunctionEntry;

int _putchar(char ch);
int _puts(char *string);

/* Formatter functions for different data types */

int printCharacter(char *format, va_list args);
int printString(char *format, va_list args);
int printInteger(char *format, va_list args);
int printPercentage(char *format, va_list args);
int printHexadecimal(char *format, va_list args);
int printCapitalHexadecimal(char *format, va_list args);
int printOctal(char *format, va_list args);
int printUnsigned(char *format, va_list args);

/* Function for selecting the appropriate formatter function */
int (*selectFormatter(char *format))(char *format, va_list);

/* Main printf function */
int _printf(const char *format, ...);

/* Helper functions */

int integer(int number);
int countDigits(int number);
int absoluteValue(int number);

#endif
