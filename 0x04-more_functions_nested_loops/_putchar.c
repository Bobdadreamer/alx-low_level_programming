#include <unistd.h>
#include "main.h"

/**
 * _,putchar - write the character c
 * @c: the character to print
 * Return: On success 1
 * On error, -1 is returned and error is set correctly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
