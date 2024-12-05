#include "list.h"
/**
 * print_list - print the element in a list
 * @h: the list
 *
 * Description: print the element of one list
 * Return: the number of node in the list
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		if (h->str == '\0')
			printf"[0] (nil)\n";
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}

