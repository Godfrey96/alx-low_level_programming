#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on successful
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argc - 1);
	(void)argv;
	return (0);
}
