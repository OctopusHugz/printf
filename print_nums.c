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
	unsigned int print;

	holder = va_arg(args, int);
	if (holder < 0)
	{
		_putchar ('-');
		holder = -holder;
		i += 1;
	}
	print = holder;
	i += print_number(print);
	return (i - 2);
}

/**
 * print_number - start of funciton
 * @n: number given to print
 * Return: int
 */

int print_number(unsigned int n)
{
	int i = 0;

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
	unsigned int print;

	holder = va_arg(args, int);
	if (holder < 0)
	{
		_putchar ('-');
		holder = -holder;
		i += 1;
	}
	print = holder;
	i += print_number(print);
	return (i - 2);
}
