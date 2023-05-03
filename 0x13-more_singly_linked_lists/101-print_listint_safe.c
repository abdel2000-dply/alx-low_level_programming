#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *tmp;
	size_t i = 0;

	if (!head)
		exit(98);

	curr = head;

	while (curr)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		i++;
		tmp = curr->next;

		if (tmp >= curr)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			exit(98);
		}
		curr = tmp;
	}

	return (i);
}
