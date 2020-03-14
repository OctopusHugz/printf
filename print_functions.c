#include <unistd.h>
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
 * @arguments: char to print from va_list
 */
void print_char(va_list args)
{
	_puthcar(va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @arguments: integer to print from va_list
 */
void print_int(va_list args)
{
	int holder;

	holder = va_arg(args, int);
	printnumber(holder);
}

/**
 * printnumber - start of funciton
 * @n: number given to print
 *
 * Return: void
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n/10)
		printnumber(n/10);
	putchar(n%10 + '0');
}

/**
 * print_float - prints a float
 * @arguments: float to print from va_list
 */
void print_float(va_list args)
{
	float holder;

	holder = va_arg(args, double);
	printnumber(holder);
}

/**
 * print_string - prints a string
 * @arguments: string to print from va_list
 */

void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		break;
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
}

/**
 * print_dec - prints a decimal value
 * @arguments: decimal value to print from va_list
 */

void print_dec(va_list args)
{
	float holder;

	holder = va_arg(args, double);
	printnumber(holder);
}
