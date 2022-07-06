#include "main.h"

/**
 * main-Entry point
 * print_alphabet - program that prints alphabet in lowercase
 * Return: 0 if successfull
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
