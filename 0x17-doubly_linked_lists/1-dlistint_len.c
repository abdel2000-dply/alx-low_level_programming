#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return n;
}
