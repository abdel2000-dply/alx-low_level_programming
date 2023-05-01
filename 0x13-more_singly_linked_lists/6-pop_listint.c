#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 *		0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int m;

	if (!*head)
		return (0);

	tmp = *head;
	m = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (m);
}
