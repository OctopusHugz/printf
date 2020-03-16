#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a char
 * @args: char to print from va_list
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

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
 * print_float - prints a float
 * @args: float to print from va_list
 */

void print_float(va_list args)
{
	float holder;

	holder = va_arg(args, double);
	print_number(holder);
}

/**
 * print_string - prints a string
 * @args: string to print from va_list
 */

void print_string(va_list args)
{
	int i;
	char *string = va_arg(args, char *);

	if (string == NULL)
		return;
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
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

/**
 * print_mod - prints a modulus operator
 * @args: modulus operator to print from va_list
 */

void print_mod(void)
{
	_putchar('%');
}

void print_pointer(va_list args)
{
	unsigned int holder;

	holder = va_arg(args, int);
	_putchar('0');
	_putchar('x');
	hex_recursion_lower(holder);

}
void print_hex_lower(va_list args)
{
	unsigned int n;

	n = va_arg(args, int);
	hex_recursion_lower(n);
}

void hex_recursion_lower(unsigned int n)
{
	unsigned int num, i, j;
	int remainder;
	char *dec = "012345";
	char *hex = "fedcba";

	if (n == 1)
		_putchar('1');
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
	}
}
