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
 * Return: int
 */

int print_char(va_list args)
{
	int i = -1;
	int c = va_arg(args, int);

	if (c < 32 && c > 127)
		return (-1);
	_putchar(c);
	return (i);
}


/**
 * print_string - prints a string
 * @args: string to print from va_list
 * Return: int
 */

int print_string(va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	i -= 1;
	return (i - 1);
}


/**
 * print_mod - prints a modulus operator
 * Return: int
 */

int print_mod(void)
{
	int i = 0;

	_putchar('%');
	return (i - 1);
}

/**
 * print_string_cust - custom string print function prints any
 * non-printable characters as '\x' followed by ascii value
 * in hexadecimal uppercase
 * @args: custom string to print from va_lst
 * Return: number of characters printed
 */

int print_string_cust(va_list args)
{
	char *string = va_arg(args, char *);
	char *point = string;
	int i = 0, count = 0;

	if (string == NULL)
	{
		_printf("(null)");
		return (4);
	}
	if (string[i] == '\0')
		return (-2);
	for (i = 0; string[i]; i++, point++)
	{
		if ((string[i] > 0 && string[i] < 32) || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			if (*point >= 0 && *point <= 16)
			{
				_putchar('0');
				count++;
			}
			count += hex_recursion_upper(string[i]);
		}
		else
		{
			_putchar(string[i]);
			count++;
		}
	}
	count++;
	return (count - 3);
}
