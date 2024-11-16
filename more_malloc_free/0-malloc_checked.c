#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocate memory malloc
 * @b: size to malloc
 * Return: ptr to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
