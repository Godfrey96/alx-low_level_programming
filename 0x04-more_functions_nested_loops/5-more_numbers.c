#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * Return: 0 on successful
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i <= 9)
			{
				_putchar(i + '0')
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0')
			}
		}
		_putchar('\n');
	}
}
