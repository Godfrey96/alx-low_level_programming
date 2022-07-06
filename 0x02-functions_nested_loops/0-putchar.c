#include "main.h"

/**
 * main-Entry point
 * program to print _putchar
 * Return: 0 if successful
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	do {
		_putchar(ch[i]);
		i++;
	} while (ch[i]);
	_putchar('\n');
	return (0);
}
