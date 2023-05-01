#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (!head)
		return;

	while (*head)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}

	*head = NULL;
}
