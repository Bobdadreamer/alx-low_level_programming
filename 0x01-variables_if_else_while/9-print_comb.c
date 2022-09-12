#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all combination of single digits
 *
 * Return: always 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');

	putchar('\n');
	return (0);
}

