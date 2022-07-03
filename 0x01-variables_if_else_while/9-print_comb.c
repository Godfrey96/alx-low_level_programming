#include <stdio.h>
/**
 * main-Entry point
 * print all combination of single digit numbers
 *seperated by commas and space'Return: 0 if successful
 * Return: 0 if successful
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i <= 57);
	putchar('\n');
	return (0);
}
