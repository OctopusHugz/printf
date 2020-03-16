#include "holberton.h"

/**
 * _printf - prints a formatted string according to format specifiers
 * @format: formatted string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count, num_mods = 0;

	count = _strlen(format);
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
	}
	num_mods = count_mods(format);
	count -= num_mods;
	return (count);
}
