#include "main.h"
#include <string.h>

/**
 * main-Entry point
 * program to print _putchar
 * Return: 0 if successful
 */

int main(void)
{
	char ch[] = "_putchar\n";
	int i;

	for (i = 0; i < strlen(ch); i++)
	{
		_putchar(ch[i]);
	}
	return 0;
}
