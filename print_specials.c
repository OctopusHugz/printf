#include "holberton.h"

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
	return (i - 2);

}

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
		count += hex_recursion_lower(num);
		_putchar(remainder + '0');
	}
	return (count + 1);
}

/**
 * print_binary - prints a binary number
 * @args: decimal number from va_list
 * Return: number of binary digits printed
 */

int print_binary(va_list args)
{
	int i = 0;
	unsigned int n = va_arg(args, int);

	i = binary_recursion(n);
	return (i - 3);
}

/**
 * binary_recursion - recursively prints a binary number
 * @n: decimal number to print in binary
 * Return: number of binary digits printed
 */

int binary_recursion(unsigned int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (2);
	}
	if (n == 1)
	{
		_putchar('1');
		i++;
	}
	else if (n % 2 == 0)
	{
		i += binary_recursion(n / 2);
		_putchar('0');
	}
	else if (n % 2 == 1)
	{
		i += binary_recursion(n / 2);
		_putchar('1');
	}
	i++;
	return (i);
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
