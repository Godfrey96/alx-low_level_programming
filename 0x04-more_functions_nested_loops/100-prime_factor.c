#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest prime factor
 * Return: 0 on successful
 */

int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num);; c > 2; c++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}

	}
	return (0);
}
