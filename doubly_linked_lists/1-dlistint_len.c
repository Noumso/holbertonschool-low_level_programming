#include "lists.h"

/**
 * dlistint_len - return the nb of elements in a linked list
 * @h: double linked list
 * Return: len of the lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		actual = actual->next;
		len++;
	}
	return (len);
}
