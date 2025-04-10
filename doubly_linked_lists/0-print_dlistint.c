#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: the double linked list
 *
 * Description: This function traverses the list starting from `h`
 * and prints the integer stored in each node.
 *
 * Return: the len of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		printf("%i\n", actual->n);
		actual = actual->next;
		len++;
	}
	return (len);
}

