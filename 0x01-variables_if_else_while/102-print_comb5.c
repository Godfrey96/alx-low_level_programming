#include <stdio.h>
/**
 * main-Entry point
 * program that princombinations of two two-digit
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 98; i++)
	{
		for( j = i + 1; j < 99; j ++)
		{
			int res1 = i / 10;
			int res2 = i % 10;

			putchar(res1 + '0');
			putchar(res2 + '0');
			putchar(' ' );

			int res3 = j / 10;
			int res4 = k % 10;

			putchar(res3 + '0');
			putchar(res4 + '0');

			if (i == 98 && j == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\');
	return (0);
}
