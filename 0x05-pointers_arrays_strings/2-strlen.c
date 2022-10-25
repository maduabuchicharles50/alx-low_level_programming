#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @str: string.
 * Return: length.
 */
int _strlen(char *s);
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

