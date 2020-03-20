#include "holberton.h"

/**
 *
 *
 *
 *
 */
int print_plus(va_list args)
{
	int i = 0;
	int holder;

	holder = va_arg(args, int);
	if (holder >= 0)
        {
                _putchar('+');
        }
	else
	{
		i -= 1;
	}
	i += print_number(holder);
	return (i - 2);
}

int print_hash(va_list args, char c)
{
	int i = 0;

	if (c == 'X')
	{
		_putchar('0');
		_putchar('X');
		i++;
	}
	if (c == 'x')
	{
		_putchar('0');
		_putchar('x');
		i++;
	}
	if (c == 'o')
	{
		_putchar('0');
	}
	i += modulo(args, c);
	return (i);
}

int print_space(va_list args)
{
	int i = 0;
	int holder = va_arg(args, int);

	if (holder >= 0)
		_putchar(' ');
	else
		i -= 1;
	i += print_number(holder);
	return (i - 2);
}
