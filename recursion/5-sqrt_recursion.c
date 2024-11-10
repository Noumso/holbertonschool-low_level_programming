#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root for
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive helper function to find the square root
 * @n: The number to calculate the square root for
 * @i: The current number to test as a potential square root
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_helper(n, i + 1));
}
