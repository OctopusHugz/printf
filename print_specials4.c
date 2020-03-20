#include "holberton.h"

/**
 * rot_printer - prints a string in rot13 format
 * @string: string to print in rot13
 * Return: pointer to encoded string
 **/

char *rot_printer(char *string)
{
	int i, j;
	char *norm = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; string[i]; i++)
	{
		for (j = 0; norm[j]; j++)
		{
			if (string[i] == norm[j])
			{
				string[i] = rot[j];
				break;
			}
		}
	}
	return (string);
}


/**
 * _strdup - copies a string into newly allocated memory and returns pointer
 * @str: string to copy into new memory space
 *
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	array = (char *) malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = str[i];
	array[i] = '\0';

	return (array);
}
