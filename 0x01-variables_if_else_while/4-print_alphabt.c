#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the alphabet in lower case withount e and q
 *
 * Return: always 0(success)
 */
int main(void)
{
	char la;

for (la = 'a'; la <= 'z'; la++)
{
	if (la != 'e' && la != 'q')
		putchar(la);
}

putchar('\n');

return (0);
}

