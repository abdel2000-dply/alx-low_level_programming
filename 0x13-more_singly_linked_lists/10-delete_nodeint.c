#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list.
 * @head: pointer to pointer to head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	prev = *head;
	curr = prev->next;
	for (i = 1; curr && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (!curr)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
