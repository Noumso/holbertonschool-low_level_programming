#include "lists.h"

/**
 * print_list - Prints the elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Description: Iterates through a singly linked list and prints each element.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	}

	return (i);
}
