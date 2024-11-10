#include "main.h"

/**
 * _puts_recursion ¬ main prints a string followed by a new line
 * @s: string to print inside
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion((s + 1));
}
