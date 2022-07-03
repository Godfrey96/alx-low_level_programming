#include <stdio.h>
/**
 * main-Entry point
 * program that print combinations of three digit
 * Return: 0 if successful
 */
int main(void)
{
	int i, j, k;
	
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for ( k = j + 1; k < 10; k++)
			{
				i = i % 10;
				j = j % 10;
				k = k % 10;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i == 7 && j == 8 && k == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
