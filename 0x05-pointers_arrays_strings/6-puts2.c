#incude "main.h"

/**
 * puts2 - prints only one character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
