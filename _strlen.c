#include "holberton.h"

/**
 * _strlen - start of function
 * @p: char pointer given
 *
 * Return: int
 */
int _strlen(const char *p)
{
	int i, j;

	for (i = 0; p[i]; i++)
		;
	for (j = 0; p[j]; j++)
	{
		if (p[j] == '%')
		{
			if (p[j - 1] == '%')
			{
				if (p[j - 2] == '%')
				{
					i -= 1;
					j += 1;
				}
			}
		}
	}
	return (i - 1);
}
