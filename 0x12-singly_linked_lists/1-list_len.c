#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	node_count++;
	h = h->next;
	}

	return (node_count);
}
