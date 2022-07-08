#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Return: 0 on successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Fizz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
