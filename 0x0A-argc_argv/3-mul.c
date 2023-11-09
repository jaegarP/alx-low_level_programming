#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints multiplication of argumnts
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if success otherwise 1
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
