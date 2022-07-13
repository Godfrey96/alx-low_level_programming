#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * Return: o on successful
 */

int main(void)
{
	int i, total, random;

	srand(time(NULL));
	for (i = 0, total = 2772; total > 122; i++)
	{
		random = (rand() % 125) + 1;
		printf("%d", random);
		total -= random;
	}
	printf("%d", total);

	return (0);
}
