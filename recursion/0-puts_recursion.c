#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: pointer to char
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
