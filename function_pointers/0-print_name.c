#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: prmt that f ptr need
 * @f: function to execute
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		return (name);
		f(name);
}
