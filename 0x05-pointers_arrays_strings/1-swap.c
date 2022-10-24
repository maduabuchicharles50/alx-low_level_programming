#include "main.h"

/**
 * swap_int - swap values of two nums
 * @b : first pointer
 * @a : second pointer
 * Returnn : void
 */

void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
