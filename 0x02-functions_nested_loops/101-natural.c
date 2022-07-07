#include <stdio.h>
/**
 * main - Lists of all natural numbers
 * Return: 0 on successful
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
