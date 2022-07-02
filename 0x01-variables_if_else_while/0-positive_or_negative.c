#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-Entry point
 * A program to get a random number and print the number
 * print positive is number is greater than 0
 * print zero if the number is 0
 * print negateiv if the number is less than 0
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
		printf("%i is positive\n", n);
	else if(n == 0)
		printf("%i is zero\n", n);
	else	
		printf("%i is negative\n", n);

	return (0);
}
