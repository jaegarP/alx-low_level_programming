#include "main.h"

/**
 * rev_string - Reverse the given string
 * @s: The string to reverse
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i, j;
	char a[1000];

	i = 0;
	j = 0;
	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(a + j);
		j++;
		i--;
	}
}
