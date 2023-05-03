#include "lists.h"

int has_loop(const listint_t *head);

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

		if (has_loop(curr))
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			exit(98);
		}
		curr = tmp;
	}

	return (i);
}
/**
 * has_loop - checks if a linked list has a loop
 * @head: pointer to head of linked list
 *
 * Return: 1 if a loop is detected, 0 otherwise
 */
int has_loop(const listint_t *head)
{
	const listint_t *slow, *fast;

	if (!head)
		return (0);

	slow = head;
	fast = head->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
