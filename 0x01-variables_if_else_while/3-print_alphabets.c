#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabets in lower and upper
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
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
return (0);
}

