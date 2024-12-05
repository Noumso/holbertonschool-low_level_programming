#include "lists.h"

/**
 * free_list - free a list
 *@head: the head of the list
 *
 * Description: this function free a list.)?
 * Return: void, no return
 */

void free_list(list_t *head)
{
	list_t *position, *next;

	position = head;

	while (position != '\0')
	{
		next = position->next;
		free(position->str);
		free(position);
		position = next;
	}
	head = '\0';
}
