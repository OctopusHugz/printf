#include "holberton.h"

/**
 * print_octal - prints an integer in base 8
 * @args: integer to print in base 8 from va_list
 * Return: number of octal integers printed
 */

int print_octal(va_list args)
{
	int i = 0;
	unsigned int n = va_arg(args, int);

	i = octal_recursion(n);
	return (i - 3);
}


/**
 * octal_recursion - recursively prints an octal number
 * @n: integer to print in base 8
 * Return: number of binary digits printed
 */

int octal_recursion(unsigned int n)
{
	int i = 0;
	unsigned int num, remainder;

	if (n > 0)
	{
		num = n / 8;
		remainder = n % 8;

		i += octal_recursion(num);
		_putchar(remainder + '0');
	}
	i++;
	return (i);
}


/**
 * print_hex_upper - prints an integer in hexadecimal uppercase
 * @args: integer to print in hexadecimal uppercase from va_list
 * Return: number of hexadecimal integers printed
 */

int print_hex_upper(va_list args)
{
	int i = 0;
	unsigned int n;

	n = va_arg(args, int);
	i = hex_recursion_upper(n);
	return (i);
}


/**
 * hex_recursion_upper - recursively prints a hexadecimal number in uppercase
 * @n: integer to print in hexadecimal uppercase
 * Return: number of hexadecimal integers printed
 */

int hex_recursion_upper(unsigned int n)
{
	int count = 0;
	unsigned int num, i, j;
	int remainder;
	char *dec = "012345";
	char *hex = "FEDCBA";

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
		hex_recursion_upper(num);
		_putchar(remainder + '0');
		count += 1;
	}
	return (count + 5);
}
