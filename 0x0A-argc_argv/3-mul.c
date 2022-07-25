#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on successful
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int mult;

	if (argv[1] && argv[2])
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mult = num1 * num2;
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
