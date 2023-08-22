#include "main.h"

/**
 * puts2 - Print only the first of two characters
 * @str: The input to print from
 *
 * Return: Void
 */
void puts2(char *str)
{
	int m, i;

	m = 0;

	while (str[m] != '\0')
	{
		m++;
	}

	for (i = 0; i < m; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
