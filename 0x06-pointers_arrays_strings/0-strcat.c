#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (; *(dest + i) != '\0'; i++)
	{
	}
	for (; *src != '\0'; src++)
	{
		*(dest + i) = *src;
		i++;
	}
	*(dest + i) = *src;

	return (dest);
}
