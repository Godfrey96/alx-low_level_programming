#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			res = i * j;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}

