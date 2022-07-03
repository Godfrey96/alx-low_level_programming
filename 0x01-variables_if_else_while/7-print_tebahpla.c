#include <stdio.h>
/**
 * main-Entry point
 * program to print all alphabet in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'z';
	int count = 26;

	do {
		putchar(ch);
		ch--;
		count--;
	} while (count > 0);
	putchar('\n');
	return (0);
}
