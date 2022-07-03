#include <stdio.h>
/**
 * main-Entry point
 * print all base 10 numbers starting from 0
 * print only using the putchar twice
 * you are not allowed to use any type char
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
