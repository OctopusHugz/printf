#include "holberton.h"
#include <stdarg.h>

int _printf(const char * format, ...)
{
	va_list args;
	char *sep = "";
	int i = 0, j;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			modulo(args, format[i + 1]);
			i++;
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}
	putchar('\n');
}
