#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a  linked list.
 * @head: Pointer to the head
 * @index: Index of the node to retrieve.
 *
 * Return: If the node exists, return a pointer to it. Otherwise, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		if (n == index)
			return (curr);
		n++;
		curr = curr->next;
	}

	return (NULL);
}

