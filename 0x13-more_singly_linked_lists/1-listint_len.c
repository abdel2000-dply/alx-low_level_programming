#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list.
 * @h: Poionter to the head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
