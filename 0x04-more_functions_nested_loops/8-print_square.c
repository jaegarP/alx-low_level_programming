#include "main.h"

/**
 * print_square - function that pents a size x size square
 * @size: size of square
 */
void print_square(int size)
{
	int line, posit;

	if (size != 0 && size > 0)
	{
		line = 0;
		while (line < size)
		{
			posit = 0;
			while (posit < size)
			{
				_putchar ('#');
				posit++;
			}
			_putchar ('\n');
			line++;
		}
	}
	else
	{
		_putchar ('\n');

	}
}
