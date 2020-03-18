#include "holberton.h"

/**
 * _printf - prints a formatted string according to format specifiers
 * @format: formatted string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count, num_args = 0;

	if (format == NULL)
		return (-1);

	count = _strlen(format);
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			num_args += modulo(args, format[i + 1]);
			i++;
		}
		else
		{
			_buffer(NULL, format[i]);
		}
		i++;
	}
	count += num_args;
	va_end(args);
	return (count);
}
