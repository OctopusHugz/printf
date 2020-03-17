#include <limits.h>
#include "holberton.h"

/**
 * print_int - prints an integer
 * @args: integer to print from va_list
 * Return: int
 */

int print_int(va_list args)
{
	int i = 0;
	int holder;

	holder = va_arg(args, int);
	i += print_number(holder);
	return (i - 2);
}

/**
 * print_number - start of funciton
 * @n: number given to print
 * Return: int
 */

int print_number(int n)
{
	unsigned int ui = (unsigned int)INT_MAX + 1;
	int i = 0;

	if (n == INT_MIN)
	{
		_putchar('-');
		i++;
		i += print_number_ui(ui);
		return (i);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	if (n / 10)
	{
		i += print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	i++;
	return (i);
}


/**
 * print_dec - prints a decimal value
 * @args: decimal value to print from va_list
 * Return: int
 */

int print_dec(va_list args)
{
	int i = 0;
	int holder;

	holder = va_arg(args, int);
	i += print_number(holder);
	return (i - 2);
}


/**
 * print_number_ui - prints an unsigned integer
 * @n: unsigned integer to print
 * Return: number of integers printed
 */

int print_number_ui(unsigned int n)
{
	int i = 0;

	if (n / 10)
		i += print_number_ui(n / 10);

	_putchar(n % 10 + '0');
	i++;
	return (i);
}
