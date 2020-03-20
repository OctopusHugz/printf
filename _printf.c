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
			if (format[i + 1] == '#')
			{
				num_args += print_hash(args, format[i + 2]);
			}
			else
				num_args += modulo(args, format[i + 1]);
			if (format[i + 1] == '+' || format[i + 1] == ' ' ||
				format[i + 1] == '#')
				i += 1;
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	count += num_args;
	va_end(args);
	return (count);
}
