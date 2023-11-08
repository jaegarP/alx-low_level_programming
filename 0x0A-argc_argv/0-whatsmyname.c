#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program
 * @argc - number of arguments
 * @argv - vector of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return 0;
}
