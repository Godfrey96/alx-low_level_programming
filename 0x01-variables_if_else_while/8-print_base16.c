#include <stdio.h>
/**
 * main-Entry point
 * print all the numbers in base 6 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';
	int count = 0;

	do {
		putchar(count + '0');
		count++;
	} while (count < 10);
	count = 0;

	do {
		putchar(ch);
		ch++;
		count++;
	} while (count < 6);
	putchar('\n');
	return (0);
}
