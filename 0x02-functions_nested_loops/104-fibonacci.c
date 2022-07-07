#include <stdio.h>

/**
 * main - Find and print the first 98 fib numbers starting with 1 and 2.
 * Return: 0 on successful
 */
int main(void)
{
	int i;
	unsigned long int fibo1, fibo2, fib1, fib2;
	unsigned long int fib_half1, fib_half2, fib_half3;

	fibo1 = 0;
	fibo2 = 1;
	fib1 = 1;
	fib2 = 2;

	printf("%ld, %ld", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		if (fib1 + fib2 > 10000000000 || fibo2 > 0 || fibo1 > 0)
		{
			fib_half1 = (fib1 + fib2) / 10000000000;
			fib_half2 = (fib1 + fib2) % 10000000000;
			fib_half3 = fibo1 + fibo2 + fib_half1;
			fibo1 = fibo2;
			fibo2 = fib_half3;
			fib1 = fib2;
			fib2 = fib_half2;
			printf("%ld%010%ld", fibo2, fib2);
		}
		else
		{
			fib_half2 = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib_half2;
			printf("%ld", fib2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
