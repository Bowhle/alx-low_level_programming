#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Address of the pointer to the first node of the list.
 * @str: The string to insert into the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int length = 0;
	char *str_dup;

	if (str == NULL)
	{
	return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
	free(new_node);
	return (NULL);
	}

	while (str[length])
	{
	length++;
	}
	new_node->str = str_dup;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	last_node = *head;
	while (last_node->next)
	{
	last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
