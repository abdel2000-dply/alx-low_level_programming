#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: a pointer to the head of a list
 * @index: the index of the node
 *
 * Return: the nth node of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int i;

	for (i = 0; head && i < index; i++)
		head = head->next;

	return ((i == index) ? head : NULL);
}
