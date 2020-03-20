#include "holberton.h"

/**
 * print_plus - accounts for plus flag
 * @args: argument given
 *
 * Return: int
 */
int print_plus(va_list args)
{
	int i = 0;
	int holder;

	holder = va_arg(args, int);
	if (holder >= 0)
	{
		_putchar('+');
	}
	else
	{
		i -= 1;
	}
	i += print_number(holder);
	return (i - 2);
}

/**
 * print_hash - accounts for hash flag
 * @args: argument given
 * @c: format spec
 *
 * Return: int
 */
int print_hash(va_list args, char c)
{
	int i = 0;

	if (c == 'X')
	{
		_putchar('0');
		_putchar('X');
		i++;
	}
	if (c == 'x')
	{
		_putchar('0');
		_putchar('x');
		i++;
	}
	if (c == 'o')
	{
		_putchar('0');
	}
	i += modulo(args, c);
	return (i);
}

/**
 * print_space - accounts for space flag
 * @args: argument given
 *
 * Return: int
 */
int print_space(va_list args)
{
	int i = 0;
	int holder = va_arg(args, int);

	if (holder >= 0)
		_putchar(' ');
	else
		i -= 1;
	i += print_number(holder);
	return (i - 2);
}
