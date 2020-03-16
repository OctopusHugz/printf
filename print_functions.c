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
	int holder;

	holder = va_arg(args, int);
	print_hexnums(holder);
}
void print_hexnums(int n)
{
	int i, j, k, l;
        hex compare[] = {
                {1, '1'},
                {2, '2'},
                {3, '3'},
                {4, '4'},
                {5, '5'},
                {6, '6'},
                {7, '7'},
                {8, '8'},
                {9, '9'},
                {10, 'a'},
                {11, 'b'},
                {12, 'c'},
                {13, 'd'},
                {14, 'e'},
                {15, 'f'}
        };
        int a[] = {1048576, 65536, 4096, 256, 16};

	i = 0;
	while (n != 0)
	{
		if (n > a[i])
		{
			j = n / a[i];
			k = j * a[i];
			print_hexnums(n - k);
			l = n - k;
		}
		i++;
	}
	for (i = 0; i < 15; i++)
	{
		if (l == compare[i].num)
			_putchar(compare[i].h);
	}
}
