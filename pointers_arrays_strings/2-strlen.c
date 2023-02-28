#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 *
 * @s: The string to be printed
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
