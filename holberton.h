#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int _putchar(char c);

int special_check(char c);

/**
 * struct type - struct type
 *
 * @string: The string
 * @f: The function associated
 */

typedef struct specifier
{
	char *string;
	void (*vpoin)();

} specifier;

void printnumber(int n);

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

#endif /* HOLBERTON_H */
