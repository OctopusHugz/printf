#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

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

int print_number(int n);

int print_char(va_list args);

int print_int(va_list args);

int print_float(va_list args);

int print_string(va_list args);

int print_dec(va_list args);

int print_mod(void);

int modulo(va_list args, char c);

int print_binary(va_list args);

int binary_recursion(unsigned int n);

int print_unsigned(va_list args);

int print_number_ui(unsigned int n);

int print_octal(va_list args);

int octal_recursion(unsigned int n);

int print_hex_lower(va_list args);

int hex_recursion_lower(unsigned int n);

int print_hex_upper(va_list args);

int hex_recursion_upper(unsigned int n);

int print_string_cust(va_list arguments);

int print_pointer(va_list args);

int print_rev_string(va_list args);

int print_rev_recursion(char *string);

#endif /* HOLBERTON_H */
