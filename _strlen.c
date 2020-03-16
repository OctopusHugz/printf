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
