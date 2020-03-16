#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @format: String to return the lenght of
 *
 * Return: 0 if success
 */

int _strlen(const char *format)
{
	int len;

	for (len = 0; format[len]; len++)
		;

	return (len);
}

/**
 * count_mods - counts the number of modulus operators in a string
 * @format: string to check for modulus operators
 * Return: Number of modulus operators in string
 */

int count_mods(const char *format)
{
	int i, num_mods = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
			num_mods++;
	}
	return (num_mods);
}
