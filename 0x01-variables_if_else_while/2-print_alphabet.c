#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabets in lower case
 *
 * Return: always 0(success)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

