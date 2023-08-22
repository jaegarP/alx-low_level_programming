#include "main.h"

/**
 * print_rev - Print a string in rev
 * @s: String to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	k = i;

	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
