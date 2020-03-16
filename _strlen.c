#include "holberton.h"

/**
 * _strlen - start of function
 * @p: char pointer given
 *
 * Return: int
 */
int _strlen(const char *p)
{
	int i, j, k = 0;

	for (i = 0; p[i]; i++)
		;
	for (j = 0; p[j]; j++)
	{
		if (p[j] == '%')
		{
			if (p[j - 1] == '%')
			{
				k++;
				j += 1;
			}
		}
	}
	if (k == 1)
	{
		return (i - k);
	}
	if (k >= 2)
	{
		return (i - k - 1);
	}
	else
		return (i);
}
