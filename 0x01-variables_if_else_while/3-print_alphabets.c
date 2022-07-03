#include <stdio.h>
/**
 * main-Entry point
 * program to print alphaet in lowercase and uppercase
 * Return: 0 if successful
 */
int main(void)
{
	int ch = 'a';
	int count  = 0;

	do {
		putchar(ch);
		ch++;
		count++;
	} while (count < 26);
	ch = 'A';
	count = 0;

	do {
		putchar(ch);
		ch++;
		count++;
	} while (count < 26);
	putchar('\n');
	return (0);
}
