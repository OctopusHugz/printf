#include "holberton.h"

/**
 * modulo - finds correct function to run based on format specifier
 * @args: va_list of args passed to function
 * @c: character to pass through struct
 * Return: int
 */

int modulo(va_list args, char c)
{
	int i = 0, count = 0;
	specifier specs[] = {
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"%", print_mod},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_string_cust},
		{"p", print_pointer},
		{"r", print_rev_string},
		{NULL, NULL}
	};

	while (specs[i].string)
	{
		if (c == *(specs[i]).string)
		{
			count = specs[i].vpoin(args);
			break;
		}
		i++;
	}
	if (specs[i].string == NULL)
	{
		_putchar('%');
		_putchar(c);
	}
	return (count);
}
