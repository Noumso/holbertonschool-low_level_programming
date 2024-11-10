#include <stdio.h>
/**
 * main - print the nb of arg
 * @argc: nm of cmd line arg
 * @argv: array that contains prgm cmd lin arg
 * Return: 0 -success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d/n", argc - 1);
	return (0);
}

