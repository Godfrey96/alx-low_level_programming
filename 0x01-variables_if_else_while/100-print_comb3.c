#include <stdio.h>
/**
 * main-Entry point
 * program to print all possible two combinations
 * must be seperated by comma then followed by space
 * numbers should be in ascending order
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
