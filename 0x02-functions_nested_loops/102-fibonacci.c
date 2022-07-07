#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 on successful
 */
int main(void)
{
	int i;
	unsigned long firstNum = 1, secondNum = 2, sum;

	for (i = 0; i < 50; i++)
	{
		printf("%ld", firstNum);
		sum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
