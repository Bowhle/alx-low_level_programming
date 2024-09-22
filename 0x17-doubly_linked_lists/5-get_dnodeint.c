#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the node at a specified index
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve
 *
 * Return: The address of the node at index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL); /* If the node does not exist */
}
