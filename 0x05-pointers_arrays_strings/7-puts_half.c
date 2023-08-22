#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: Given string to print half of
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i, l, n;

	i = 0;
	l = 0;
	while (str[i++] != '\0')
		l++;

	if ((l % 2) == 0)
		n = l / 2;

	else
		n = (l - 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
