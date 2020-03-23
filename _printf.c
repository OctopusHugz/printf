#include "holberton.h"

/**
 * _printf - prints a formatted string according to format specifiers
 * @format: formatted string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args, args2;
	int i = 0, count, num_args = 0;

	if (format == NULL)
		return (-1);
	count = _strlen(format);
	va_start(args, format);
	va_copy(args2, args);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '#')
			{
				num_args += print_hash(args, format[i + 2]);
			}
			if ((isdigit(format[i + 1]) || format[i + 1] == '*') &&
			    format[i + 1] != '0')
			{
				count += width_printer(args, format[i + 1], format[i + 2]);
				i++;
			}
			else
				num_args += modulo(args, format[i + 1]);
			if (format[i + 1] == '+' || format[i + 1] == ' ' ||
			    format[i + 1] == '#')
				i++;
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	count += num_args;
	va_end(args), va_end(args2);
	return (count);
}

/**
 * width_printer - prints spaces as needed for a width argument
 * @args: width argument from va_list
 * @c: width argument from format
 * @d: argument after width argument from format
 * Return: number of spaces printed
 **/

int width_printer(va_list args, char c, char d)
{
	va_list args2, args3, args4, args5;
	char *string;
	int count = 0, width = c - '0' - 1, num = 0, field =
		_pow_recursion(10, width), digits = num_digits(field),
		length = 0;

	va_copy(args2, args), va_copy(args3, args), va_copy(args4, args),
		va_copy(args5, args);
	if (c == '*')
	{
		digits = va_arg(args3, int);
		digits = va_arg(args4, int);
		num = va_arg(args4, int);
		count += space_printer(digits, num);
		count += modulo(args3, d);
	}
	else if ((c != '*') && (d == 'd' || d == 'i' || d == 'u' || d == 'x'
				|| d == 'X' || d == 'o' || d == 'b' || d == 'c'))
	{
		length = va_arg(args4, int);
		num = va_arg(args2, int);
		count += space_printer(digits, num);
		count += modulo(args3, d);
	}
	else if (d == 's')
	{
		string = va_arg(args, char *);
		length = _strlen(string);
		while (length < digits)
		{
			_putchar(' ');
			length++;
			count++;
		}
		count--;
		count += modulo(args2, d);
	}
	va_end(args2), va_end(args3), va_end(args4);
	return (count);
}

/**
 * space_printer - prints spaces to fill up field width if necessary
 * @digits: number of digits to print from va_list
 * @num: number to print from va_list
 * Return: number of spaces printed
 **/

int space_printer(int digits, int num)
{
	int digits2 = 0, num_spaces = 0, spaces_count = 0, count = 0;

	digits2 = num_digits(num);
	num_spaces = digits - digits2;
	while (spaces_count < num_spaces)
	{
		_putchar(' ');
		spaces_count++;
	}
	if (num_spaces < 0)
		count--;
	if (num_spaces >= 0)
		count += num_spaces - 1;
	return (count);
}
