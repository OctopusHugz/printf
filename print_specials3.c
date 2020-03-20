#include <string.h>
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


/**
 * print_rot13 - prints a ROT13 string
 * @args: string to encode from va_list args
 *
 * Return: number of characters printed
 */

int print_rot13(va_list args)
{
	int i = 0, k = 0, l, rot_pos = 0, count = 0;
	char *norm = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *string = va_arg(args, char *), *string2, *rotstring, *rotstring2;

	string2 = strdup(string);
	rot_pos = rot_finder(string2);
	if (rot_pos == INT_MAX)
	{
		string2 = rot_printer(string2);
		_printf("%s", string2);
		count = _strlen(string2);
	}
	else
	{
		while (string2[i] && i < rot_pos)
		{
			_putchar(string2[i]);
			i++;
			count++;
		}
		i += 2;
		rotstring = va_arg(args, char *);
		rotstring2 = strdup(rotstring);
		for (k = 0; rotstring2[k]; k++, count++)
		{
			for (l = 0; norm[l]; l++)
			{
				if (rotstring2[k] == norm[l])
				{
					rotstring2[k] = rot[l];
					break;
				}
			}
		}
		_printf("%s", rotstring2);
		free(rotstring2);
		for (; string2[i]; i++, count++)
			_putchar(string2[i]);
	}
	free(string2);
	return (count - 2);
}


/**
 * rot_finder - finds a ROT13 argument in a string passed to print_rot13
 * @string: string to find symbols in
 * Return: 1 if found, 0 if not
 **/

int rot_finder(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (string[i] == '%' && string[i + 1] == 'R')
		{
			return (i);
		}
		i++;
	}
	return (INT_MAX);
}
