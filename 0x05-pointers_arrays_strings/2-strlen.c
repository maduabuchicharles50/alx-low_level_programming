#include  "main.h"

/**
 * _strlen - Return the length of a string.
 *
 * @str: string
 * Return: length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}

	return (len);
}
