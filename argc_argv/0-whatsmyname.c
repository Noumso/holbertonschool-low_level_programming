#include <stdio.h>
/**
 * main - prints its name
 * @argc: nb of cmd line arg
 * @argv: array contains the prgm cmd line arg
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
