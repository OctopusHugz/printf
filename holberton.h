#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

int _strlen(const char *p);

/**
 * struct specifier - struct type
 *
 * @string: The string
 * @vpoin: The function associated
 */

typedef struct specifier
{
	char *string;
	void (*vpoin)();

} specifier;

/**
 * struct hex - converts hex
 * @num: int equal
 * @h: hex conversion
 *
 */

typedef struct hex
{
	unsigned int num;
	char h;
} hex;

void print_hex_lower(va_list args);

void hex_recursion_lower(unsigned int n);

void print_number(int n);

void print_pointer(va_list args);

void print_char(va_list args);

void print_int(va_list args);

void print_float(va_list args);

void print_string(va_list args);

void print_dec(va_list args);

void print_mod(void);

void modulo(va_list args, char c);

#endif /* HOLBERTON_H */
