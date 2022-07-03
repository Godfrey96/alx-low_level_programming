#include <stdio.h>
/**
 * main-Entry point
 * program that princombinations of two two-digit
 * Return: 0 if successful
 */
int main(void)
{
	int i, j;
	int res1, res2, res3, res4;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			res1 = i / 10;
			res2 = i % 10;

			putchar(res1 + '0');
			putchar(res2 + '0');
			putchar(' ');

			res3 = j / 10;
			res4 = j % 10;

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
	putchar('\n');
	return (0);
}
