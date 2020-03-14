#include "holberton.h"
#include <stdarg.h>

void modulo(va_list args, char c)
{
	int i = 0;
	specifier specs[] = {
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"f", print_float},
		{NULL, NULL}
	};

	while (i < 1)
	{
		if (c == *(specs[i]).string)
		{
			specs[i].vpoin(args);
		}
		i++;
	}
}
