#include "holberton.h"

/**
 * modulo - finds correct function to run based on format specifier
 * @args: va_list of args passed to function
 * @c: character to pass through struct
 */

void modulo(va_list args, char c)
{
	int i = 0;
	specifier specs[] = {
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"%", print_mod},
		{NULL, NULL}
	};

	while (specs[i].string)
	{
		if (c == *(specs[i]).string)
		{
			specs[i].vpoin(args);
		}
		i++;
	}
}
