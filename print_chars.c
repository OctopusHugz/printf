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
 * print_mod - prints a modulus operator
 */

void print_mod(void)
{
	_putchar('%');
}
