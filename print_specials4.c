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
