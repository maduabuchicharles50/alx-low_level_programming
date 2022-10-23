#include "main.h"

/**
 * times_tables - Prints the times table, starting with 0.
 *
 */

void times_tables(void)
{
	int num, mult, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * mult;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');

		}
		_putchar('\n');
	}
}
