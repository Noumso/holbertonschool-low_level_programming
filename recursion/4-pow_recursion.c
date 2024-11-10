#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x
 * raised to the power of y
 * @x: value to be manipulated
 * @y: manipulator
 *
 * Return: sum as int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	return (x * _pow_recursion(x, --y));
}
