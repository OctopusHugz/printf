#include "holberton.h"

void modulo(va_list args, char c)
{
	int i = 0;
	specifier specs[] = {
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{"d", print_dec},
		{"f", print_float},
		{"%", print_mod},
		{"p", print_pointer},
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
