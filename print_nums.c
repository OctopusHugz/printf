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
	return (i);
}

/**
 * print_number - start of funciton
 * @n: number given to print
 * Return: int
 */

int print_number(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		i += 1;
	}
	if (n == 0)
	{
		_putchar('0');
		i += 1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
	i += 1;
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
	return (i);
}
