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


/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: number to exponentiate
 * @y: exponent
 *
 * Return: result of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}


/**
 * num_digits - finds the number of digits in a given number
 * @n: number to find the width of
 * Return: number of digits in the number
 **/

int num_digits(int n)
{
	int count = 0;

	if (n == 0)
		return (1);

	while (n > 0 || n < 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
