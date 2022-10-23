#include "main.h"

/**
 * function - Prints for a digit
 *   return 1 if c is a digit
 *   return 0 otherwise
 */
int _isdigit(int c)
{
	/* c = '0' */
	/*  printf("%c: %d\n", c, _isdigit(c)) */
	/*  c = 'a' */
	/* printf("%c: %d\n", c, _isdigit(c)) */
	/*  return (0) */
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
