#include <stdio.h>
#include "main.h"

/**
 * main - prints number of argumnts
 * @argc: number of args
 * @arcv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc-1);
	(void)*argv;
	return (0);
}
