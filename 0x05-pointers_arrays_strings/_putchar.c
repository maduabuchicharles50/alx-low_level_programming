#include <unistd.h>

/**
 * _putchar - print the charater c on stdout
 * @c: print the charater
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
