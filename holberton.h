#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);

int _strlen(const char *format);

int count_args(char *holder);

/**
 * struct specifier - struct type
 *
 * @string: The string
 * @vpoin: The function associated
 */

typedef struct specifier
{
	char *string;
	int (*vpoin)();

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

int print_hex_lower(va_list args);

int hex_recursion_lower(unsigned int n);

int print_number(int n);

int print_pointer(va_list args);

int print_char(va_list args);

int print_int(va_list args);

int print_float(va_list args);

int print_string(va_list args);

int print_dec(va_list args);

int print_mod(void);

int modulo(va_list args, char c);

#endif /* HOLBERTON_H */
