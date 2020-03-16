#include "holberton.h"

/**
 * hex_recursion_lower - start of function
 * @n: unsigned int
 * Return: int
 */
int hex_recursion_lower(unsigned int n)
{
	int count = 0;
	unsigned int num, i, j;
	int remainder;
	char *dec = "012345";
	char *hex = "fedcba";

	if (n == 1)
	{
		_putchar('1');
		count += 1;
	}
	if (n > 1)
	{
		num = n / 16;
		remainder = n % 16;

		if (remainder > 9)
		{
			remainder = remainder - 15;
			remainder = -remainder;
			for (i = 0, j = 0; dec[i]; i++, j++)
			{
				if (remainder == (dec[i] - '0'))
					remainder = hex[j] - '0';
			}
		}
		hex_recursion_lower(num);
		_putchar(remainder + '0');
		count += 1;
	}
	return (count);
}

/**
 * print_pointer - start of function
 * @args: argument given
 * Return: int
 */
int print_pointer(va_list args)
{
	int i = 0;
	unsigned int holder;

	holder = va_arg(args, int);
	_putchar('0');
	i += 1;
	_putchar('x');
	i += 1;
	i = hex_recursion_lower(holder);
	return (i);
}

/**
 * print_hex_lower - start of function
 * @args: arguments given
 * Return: int
 */
int print_hex_lower(va_list args)
{
	int i = 0;
	unsigned int n;

	n = va_arg(args, int);
	i = hex_recursion_lower(n);
	return (i);
}
