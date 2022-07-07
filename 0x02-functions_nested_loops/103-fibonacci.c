#include <stdio.h>

/**
 * main - prints the sum of even fibonacci series
 * Return: 0 on successful
 */
int main(void)
{
	int i;
	unsigned long int firstTerm, secondTerm, nextTerm, sum;

	firstTerm = 1;
	secondTerm = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (firstTerm < 4000000 && (firstTerm % 2) == 0)
		{
			sum += firstTerm;
		}
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
	}
	printf("%ld\n", sum);
	return (0);
}
