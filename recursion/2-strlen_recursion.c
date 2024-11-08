#include "main.h"

/**
 * _strlen_recursion ¬ return the lenght of a string
 * @s: string to measure
 *
 * return: lenght of the string as int
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion((s + 1)));
	return (0);
}
