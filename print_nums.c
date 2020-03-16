#include "holberton.h"

/**
 * print_int - prints an integer
 * @args: integer to print from va_list
 */

void print_int(va_list args)
{
	int holder;

	holder = va_arg(args, int);
	print_number(holder);
}

/**
 * print_number - start of funciton
 * @n: number given to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}


/**
 * print_dec - prints a decimal value
 * @args: decimal value to print from va_list
 */

void print_dec(va_list args)
{
	int holder;

	holder = va_arg(args, int);
	print_number(holder);
}
