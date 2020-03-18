#include "holberton.h"

/**
 * _buffer - prints and counts string
 * @string: string given
 * @c: character given
 * Return: int
 */
int _buffer(char *string, char c)
{
	int i, j;
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (0);
	for (i = 0; buffer[i]; i++)
	{
		buffer[i] = 0;
	}
	if (c == '\0' && string == NULL)
		string = "";
	if (c == '\0')
	{
		(void) c;
		for (i = 0; string[i]; i++)
		{
			buffer[i] = string[i];
		}
		buffer[i] = '\0';
		for (i = 0; buffer[i]; i++)
		{
			_putchar(buffer[i]);
		}
		j = _strlen(buffer + 1);
	}
	if (string == NULL)
	{
		(void) string;
		*buffer = c;
		*(buffer + 1) = '\0';
		_putchar(c);
		j = _strlen(buffer + 1);
	}

	free(buffer);
	return (j);
}
