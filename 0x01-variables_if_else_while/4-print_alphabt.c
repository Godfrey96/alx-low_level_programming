#include <stdio.h>
/**
 * main-Entry point
 * print all alphabet letters in lowercase except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';
	int count  = 0;

	do {
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
		count++;
	} while (count < 26);
	putchar('\n');
	return (0);
}
