#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *tmp = NULL;
	size_t i = 0;

	if (!head)
		return (0);

	curr = head;

	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
		tmp = curr->next;

		if (tmp && tmp >= curr)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
		curr = tmp;
	}

	return (i);
}
