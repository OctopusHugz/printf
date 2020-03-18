#include "holberton.h"

/**
 * print_rev_recursion - prints a string in reverse
 * @s: string to print in reverse
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
