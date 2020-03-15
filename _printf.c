#include "holberton.h"

int _printf(const char * format, ...)
{
	va_list args;
	int i = 0, count;

	count = 0;
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
			_putchar(format[i]);
		}
		i++;
		count++;
	}
	return (count);
}
