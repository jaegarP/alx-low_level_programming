#include "main.h"
#include <stdio.h>

/**
 * print_array - Print a number of items in an array of integers
 * @a: The array to print
 * @n: The number of items from the array to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
