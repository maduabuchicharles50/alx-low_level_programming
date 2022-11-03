#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints the character c to stdout
 * @c: print the character
 * Return: on success 1.
 */

int _putchar(char c)
{
	return (write(1 ,&c, 1));
}
