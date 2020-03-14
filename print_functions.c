#include <stdio.h>
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

void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - prints an integer
 * @arguments: integer to print from va_list
 */

void print_int(va_list arguments)
{
	printf("%i", va_arg(arguments, int));
}

/**
 * print_float - prints a float
 * @arguments: float to print from va_list
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - prints a string
 * @arguments: string to print from va_list
 */

void print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);

	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}

/**
 * print_dec - prints a decimal value
 * @arguments: decimal value to print from va_list
 */

void print_dec(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
