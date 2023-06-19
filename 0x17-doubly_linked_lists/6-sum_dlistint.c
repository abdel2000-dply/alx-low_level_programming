#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data n of a linked list.
 * @head: Pointer to the head
 *
 * Return: The sum of all the data in the list. 0 If the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
