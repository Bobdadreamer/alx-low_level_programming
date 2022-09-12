#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the numbers in base 16
 *
 * Return: always 0(success)
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}

