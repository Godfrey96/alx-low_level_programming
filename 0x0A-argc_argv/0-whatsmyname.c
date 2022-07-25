#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: this is arument count
 * @argv: argument vector
 * Return: 0 on successful
 */

int main(int argc, int *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
