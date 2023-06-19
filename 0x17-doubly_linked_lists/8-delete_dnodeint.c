#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the heaad
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *t;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;

	if (curr == NULL)
		return (-1);

	if (curr->next == NULL)
	{
		curr->prev->next = NULL;
		free(curr);
		return (1);
	}

	t = curr->prev;
	t->next = curr->next;
	curr->next->prev = t;
	free(curr);
	return (1);
}

