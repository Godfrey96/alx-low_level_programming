#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char ch = 'a';
	int count = 0;

	do {
		_putchar(ch);
		ch++;
		count++;
	} while (count < 26);
	_putchar('\n');
}
