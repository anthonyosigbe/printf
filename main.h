#ifndef PRINT_F_HEADER
#define PRINT_F_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

typedef struct format
{
    char *id;
    int (*function)(va_list val);
} convert_match;

int printPointer(va_list val);
int printHex(unsigned long int num);
int printHEX(unsigned int num);
int printExclusiveString(va_list val);
int printCap_HEX(va_list val);
int print_Hex(va_list val);
int printOct(va_list val);
int printUnsigned(va_list args);
int printBin(va_list val);
int printSrev(va_list args);
int printRot13(va_list args);
int printInt(va_list args);
int printDec(va_list args);
int stringLength(char *s);
int copyString(char *dest, char *src);
int revString(char *s);
int characterCount(const char *s);
int printPercent(void);
int printCharacter(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
