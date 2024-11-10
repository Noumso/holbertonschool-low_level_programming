#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two nb
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
		return (0);
	}
	printf("Error\n");
	return (1);
}
