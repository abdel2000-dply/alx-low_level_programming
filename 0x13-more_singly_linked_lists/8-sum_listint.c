#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list.
 * @head: pointer to the head of a list.
 *
 * Return: the sum of the data n of a list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
