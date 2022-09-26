#include "main.h"

/**
 * _memset - fills the memory with a particular value
 * @s: starting address
 * @b: constant byte
 * @n: number of bytes to be changed
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
