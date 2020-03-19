#include "holberton.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @string: string to print in reverse
 * Return: number of characters printed
 */

int print_rev_recursion(char *string)
{
	int i = 0;

	if (*string)
	{
		i += print_rev_recursion(string + 1);
		_putchar(*string);
	}
	i++;
	return (i);
}

/**
 * print_rev_string - prints a string in reverse
 * @args: string to print from va_list
 * Return: number of characters printed
 */

int print_rev_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		_printf("null");
		return (4);
	}

	i += print_rev_recursion(string);

	return (i - 3);
}


/**
 * hex_recursion_lower_long - start of function
 * @n: unsigned int
 * Return: int
 */

int hex_recursion_lower_long(unsigned long n)
{
	int count = 0;
	unsigned long num, i, j;
	int remainder;
	char *dec = "012345";
	char *hex = "fedcba";

	if (n == 0)
	{
		_putchar('0');
	}
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
		if (num > 0)
			count += hex_recursion_lower_long(num);
		_putchar(remainder + '0');
	}
	count++;
	return (count);
}
