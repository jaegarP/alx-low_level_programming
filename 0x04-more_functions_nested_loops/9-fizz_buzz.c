#include <stdio.h>
#include <string.h>

/**
 * main - prints fizzbuzz based on multiple
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char p[10];

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			strcpy(p, "Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			strcpy(p, "Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			strcpy(p, "FizzBuzz");
		}
		else
		{
			sprintf(p, "%d", i);
		}
		printf("%s ", p);
	}
	putchar('\n');
	return (0);
}
