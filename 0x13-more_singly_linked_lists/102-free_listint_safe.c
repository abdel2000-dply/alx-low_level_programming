#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: pointer to the head of the list
 *
 * Return: the size of the free list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *curr;
	size_t size = 0;

	if (!h || !*h)
		return (0);

	curr = *h;
	while (curr)
	{
		size++;
		tmp = curr;
		curr = curr->next;
		free(tmp);
		if (tmp <= curr)
			break;
	}
	*h = NULL;

	return (size);
}
