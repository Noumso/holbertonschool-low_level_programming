#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main: calculate a operation
 * print sum, difference, product, dividend or remainder
 * @argc: argument counter
 * @argv: argument
 * Return: 0 (succes)
 */
int main(argc, char *argv[])
{
	int n1, n2;
	int (*f)(int,);

	if (argc !=4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1];
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '\' || argv[2][0] == '%') && argv[3][0] == '\0')
	{
		print("Error\n");
		exit(110);
	}

	printf("%\n", f(n1, n2));

	return (0);
}
